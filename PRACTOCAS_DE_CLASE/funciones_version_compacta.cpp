#include <iostream>
using namespace std;
//Crear un programa que calcule la suma de los primeros n 

//Declaracion de funciones:
int get_user_input(){
    cout << "Ingrese el valor de n"<<endl;
    int n;
    cin>>n;
    return n;
}
int calculate_sum(int n){
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    return sum;
}
void display_output(int sum){
    cout << "La suma de los primeros numeros enteros es: "<<sum<<endl;
}

int main() {
    //Llamadas a las funciones:
    display_output(calculate_sum(get_user_input()));
    return 0;
}

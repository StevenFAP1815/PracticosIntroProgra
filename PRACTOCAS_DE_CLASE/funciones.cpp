#include <iostream>
using namespace std;
//Crear un programa que calcule la suma de los primeros n 

//Prototipo de la función:
int get_user_input();
int calculate_sum(int n);
void display_output(int sum);

int main() {
    
    //Llamadas a las funciones:

    int n = get_user_input(); 
    int sum = calculate_sum(n);
    display_output(sum);
    return 0;
}
//Cuerpo de la función
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
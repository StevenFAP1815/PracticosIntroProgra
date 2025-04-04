#include <iostream>
#include<string>
using namespace std;
int main() {
    
    cout << "Ingresa un numero"<<endl;
    
    int num;
    cin >> num;
    while(num<0){
        cout << "Intenta de nuevo" <<endl;
        cin >> num;
    }
    
    //Factorial de un numero = el producto de todos los antecesores del numero dado
    int factorial = 1;
    for(int i = 1; i<=num; i++){
        factorial *=i;
    }
    cout << "Factorial de " << num << " es: " <<factorial<<endl;
    
    return 0;
}
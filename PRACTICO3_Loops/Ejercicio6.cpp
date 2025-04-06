#include <iostream>
#include<string>
using namespace std;
int main() {
    
    int num;
    cout <<"Ingrese un numero"<<endl;
    cin >>num;
    
    while(num<0){
        cout<<"No se permiten numeros negativos intente de nuevo"<<endl;
        cin >> num;
    }
    
    int suma = 0;
    while(num>0){
        num%10;
        int capture = num%10;
        num = num/10;
        suma += capture;
    }
    cout << "La suma de los dígitos del numero es: " << suma <<endl;
    return 0;
}
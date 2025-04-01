#include<iostream>
#include<cmath>

using namespace std;

int main(){

    
cout << "Ingrese dos numeros: " << endl;
int numero1,numero2;
cin >> numero1 >> numero2;

if(numero1<0 or numero2<0){
    cout << "No se puede ingresar un numero negativo"<<endl;
}
else{
    
    int suma = numero1 + numero2;
    cout <<"La suma de los numeros es: "<<suma<<endl;

    string sumaStr = to_string(suma);
    int numDigitos = sumaStr.length();
    int producto = suma * numDigitos;
    cout << producto << endl;
}


    return 0;
}
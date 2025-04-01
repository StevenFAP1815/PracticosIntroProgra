#include<iostream>
#include<cmath>
using namespace std;

int main(){

    cout << "Ingrese el codigo del collar: "<<endl;
    int codigo;
    cin >> codigo;

    int fibonacci = 1235813;
    if(codigo == fibonacci){
        cout << "Se encontro Fibonacci: "<<endl;
    }
    else{
        cout << "Esto no es Fibonacci" <<endl;
    }

    return 0;
}
#include<iostream>
#include<cmath>

using namespace std;

int main(){

    cout << "Ingrese algun caracter: " << endl;
    char caracter;
    cin >> caracter;

    if(caracter >= 'A' and caracter<= 'Z'){
        cout << "Es mayuscula"<<endl;
    }
    else if(caracter >= 'a' and caracter<= 'z'){
        cout << "Es miniscula"<<endl;
    }
    else{
        cout << "Es un caracter no alfabetico" << endl;
    }


    return 0;
}
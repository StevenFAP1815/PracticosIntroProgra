#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    
    //De decimal a binario
    cout << "Ingrese un numero decimal" << endl;
    int decimal;
    cin >> decimal;
    int contador = 0;
    int resto;
    string binario ="";
    while(decimal>0){
        resto = decimal%2;
        decimal = decimal/2;
        resto += contador;
        binario = to_string(resto) + binario;
    }
    cout <<binario;
    return 0;
}
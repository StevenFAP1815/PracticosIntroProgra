#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    
    cout << "Ingresa el numero que quieres dividir" <<endl;
    int num;
    cin >> num;
    
    cout << "Ingresa el numero por el que quieres dividir dicho numero" <<endl;
    int divisor;
    cin >> divisor;
    
    int residuo;
    int cociente = 0;
    
    while(num>1){
        
        if(num >= divisor){
            residuo = num - divisor;
            num = num - divisor;
            cociente++;
        }
        else if(residuo < divisor){
            break;
            }
        }
    cout <<residuo<<endl;
    cout << cociente <<endl;
    return 0;
}
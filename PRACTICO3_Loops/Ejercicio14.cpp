#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    
    cout << "Ingrese un numero" <<endl;
    int n;
    cin >> n;
    
    string num = to_string(n);
    int longitud = num.length();
    
    for(int i = 0; i<=longitud; i++){
        char com = num[i];
    }
    bool palindromo = true;
    
    for(int i = 0; i<=longitud; i++){
        if(num[i]!=num[longitud-1-i]){
            palindromo = false;
            break;
        }
    }
    if(palindromo){
        cout << "Es palindromo";
    }
    else{
        cout << "No es palindromo";
    }
    
    return 0;
}
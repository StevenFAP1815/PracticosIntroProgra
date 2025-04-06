
#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Ingrese una frase: ";
    string frase;
    getline(cin, frase);
    
    string frase_sin_espacios;
    int longitud = frase.length();
    while(longitud>100){
        cout << "No mas de 100 caracteres" <<endl;
        getline(cin, frase);}
    for(int i = 0; i < longitud; i++) {
        if(frase[i] != ' ') {  
            char letra = frase[i];
            if(letra >= 'A' && letra <= 'Z') {
                letra = letra + 32;  
            }
            frase_sin_espacios += letra;  
        }
    }
    

    bool es_palindromo = true;  
    
    for(int i = 0; i < frase_sin_espacios.length() / 2; i++) {
        
        if(frase_sin_espacios[i] != frase_sin_espacios[frase_sin_espacios.length() - 1 - i]) {
            es_palindromo = false;  
            break;  
        }
    }
    

    if(es_palindromo) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }

    return 0;
}
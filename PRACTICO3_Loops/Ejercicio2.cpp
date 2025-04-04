#include <iostream>
#include<string>
using namespace std;

int main() {
    
    cout<<"Introduzca una frase"<<endl;
    string frase;
    getline(cin, frase);
    string word ="";
    
    int espacios = frase.size();
    
    //Para verificar si no hay algun espacio dentro del string
    for(int i = 0; i<=espacios; i++){
        if (frase[i] != ' '){
            word = word+frase[i];
        }
        //Mostrar la primera palabra y reiniciar word
        else{
            cout<<"["<<word<<"]"<<endl;
            word="";
        }
    }
    //Mostrar la palabra acumulada que falta
    if (word != "") {
        cout << "[" << word << "]" << endl;
    }
    
    
    return 0;
}
#include <iostream>
#include<string>
using namespace std;
int main() {
    
    cout << "Ingrese una frase" <<endl;
    string frase;
    getline (cin, frase);
    int posiciones = frase.length();
    cout << posiciones << endl;
    
    for(int i = 0;i<posiciones;i++){
        if(frase[i] == ' '){
            cout<<i<<endl;
        }
    }
    cout << frase.length() << endl;
    
    return 0;
}
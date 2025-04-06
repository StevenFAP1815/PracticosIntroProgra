#include <iostream>
#include <string>
using namespace std;

int main() {
    
    cout << "Ingrese una palabra"<<endl;
    string palabra;
    cin >> palabra;
    
    //70 para F mayuscula y 102 para f minuscula
    int indice = palabra.length();
    int cont_f = 0;
    
    for(int i = 0; i < indice; i++){
        int car = palabra[i];
        if (car == 70 or car == 102){
            cont_f++;
            if(cont_f == 2){
                cout << i << endl;
        /* }
            else if(cont_f < 2){
                cout << "-1" <<endl;
            }
            else if(cont_f == 0){
                cout << "-2" <<endl;
            }*/
        }
    }
    }
    if(cont_f == 1){
        cout << "-1" <<endl;
    }
    else if(cont_f == 0){
        cout << "-2" <<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    int C_c = 100; //Capital de cloe
    int D_c = 100; // Capital de Daphne
    
    float I_s = 0.1; //Interes simple 
    float I_c = 0.05; //Interes compuesto
    
    cout << "Ingrese una cantidad de años" <<endl;
    int años;
    cin >> años; //Años para hacer pruebas
    
    double total = D_c; // Para fijar 100 y no cambiar el valor original de D_c
    double totalC = C_c;
    
    cout << "Año\tDaphne\t\tCloe" << endl;
    cout << "----------------------------" << endl;
    for (int i = 1; i <= años; i++) {
        
        total += (D_c * I_s);  // Sumamos el interés simple cada año
        totalC *= (1 + I_c);
        cout << i << "\t" <<total << "\t\t"<< totalC << endl;
        
    }
    
    return 0;
}
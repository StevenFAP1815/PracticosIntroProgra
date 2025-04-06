#include <iostream>
using namespace std;

int main() {
    // MCM
    cout << "Ingrese dos numeros: ";
    int n1, n2;
    cin >> n1 >> n2;
    
    int num1 = n1;
    int num2 = n2;

    while(n1 < 1 or n2 < 1){
        cout << "No numeros negativos: "<<endl;
        cin >> n1 >> n2;
        num1 = n1;
        num2 = n2;
    }
    
    int mcm = 1;
    int divisor = 2;
    
    //MCM
    while (n1 > 1 or n2 > 1) {
        int contador = 0;

        while (n1 % divisor == 0 or n2 % divisor == 0) {
            if (n1 % divisor == 0) { 
                n1 = n1 / divisor;    
            }
            if (n2 % divisor == 0) {  
                n2 = n2 / divisor;    
            }
            contador++;
        }

        if (contador > 0) {
            for (int i = 0; i < contador; i++) {
                mcm = mcm * divisor;
            }
        }
        divisor++;
    }
    
    // MCD 
    int MCD = (num1 * num2) / mcm;
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << MCD << endl;
    
    return 0;
}
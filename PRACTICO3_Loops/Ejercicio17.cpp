#include <iostream>
using namespace std;

int main() {
    int cantidad;
    cout << "Ingrese cuantos numeros primos desea mostrar: ";
    cin >> cantidad;
    
    int contador = 0; // Cuenta los primos encontrados
    int numero = 2;   // Primer número primo
    
    cout << "Los primeros " << cantidad << " numeros primos son: ";
    
    do {
        bool es_primo = true;
        
        // Verificar si el número actual es primo
        if (numero <= 1) {
            es_primo = false;
        } else {
            for (int i = 2; i * i <= numero; i++) {
                if (numero % i == 0) {
                    es_primo = false;
                    break;
                }
            }
        }
        
        // Si es primo, lo mostramos
        if (es_primo) {
            cout << numero << " ";
            contador++;
        }
        
        numero++;
    } while (contador < cantidad);
    
    cout << endl;
    return 0;
}
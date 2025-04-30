#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Dia de inicio (1=Lunes, 7=Domingo): ";
    cin >> n;
    cout << "Numero de dias del mes: ";
    cin >> k;

    int dia_actual = 1;

    // Bucle para las semanas (filas)
    for (int fila = 0; dia_actual <= k; fila++) {
        
        // Bucle para los días de la semana (columnas)
        for (int dia_semana = 1; dia_semana <= 7; dia_semana++) {
            
            // Verificar si es un día vacío o un día del mes
            if (fila == 0 and dia_semana < n or dia_actual > k) {
                
                cout << "  "; // Espacios para días vacíos
            } else {
                // Formato manual de 2 dígitos (agrega espacio si es < 10)
                if (dia_actual < 10) {
                    cout << " " << dia_actual;
                } else {
                    cout << dia_actual;
                }
                dia_actual++;
            }

            // Agregar espacio entre días (excepto al final de la línea)
            if (dia_semana < 7 && dia_actual <= k + (n - 1)) {
                cout << " ";
            }
        }
        cout << endl; // Salto de línea al terminar la semana
    }

    return 0;
}
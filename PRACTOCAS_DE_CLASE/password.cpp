#include <iostream>
#include <string>
using namespace std;

int main() {
    bool contiene_3_minus = false;
    bool contiene_3_mayus = false;
    bool contiene_numeros = false;
    bool caracteres_especiales = false;

    cout << "Ingrese la contraseña: ";
    string password;
    cin >> password;

    // Condición de longitud de la contraseña
    if (password.size() >= 8 && password.size() <= 14) {
        int cont_mayus = 0;
        int cont_minus = 0;
        // Recorremos la contraseña
        for (int i = 0; i < password.size(); i++) {
            // Comprobamos si tiene mayúsculas
            if (password[i] >= 'A' && password[i] <= 'Z') {
                cont_mayus++;
            }
            // Comprobamos si tiene minúsculas
            if (password[i] >= 'a' && password[i] <= 'z') {
                cont_minus++;
            }
            // Comprobamos si tiene números
            if (password[i] >= '0' && password[i] <= '9') {
                contiene_numeros = true;
            }
            // Comprobamos si tiene caracteres especiales (puedes agregar más caracteres si lo deseas)
            if ((password[i] >= 33 && password[i] <= 47) || (password[i] >= 58 && password[i] <= 64) || 
                (password[i] >= 91 && password[i] <= 96) || (password[i] >= 123 && password[i] <= 126)) {
                caracteres_especiales = true;
            }
        }

        // Verificamos si tiene 3 o más mayúsculas y minúsculas
        if (cont_mayus >= 3) {
            contiene_3_mayus = true;
        }
        if (cont_minus >= 3) {
            contiene_3_minus = true;
        }

        // Comprobamos que la contraseña cumpla con todos los requisitos
        if (contiene_3_mayus && contiene_3_minus && contiene_numeros && caracteres_especiales) {
            cout << "Yes" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
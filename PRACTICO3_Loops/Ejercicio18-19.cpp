#include <iostream>
using namespace std;

int main() {
    int inicio, fin;

    cout << "Ingrese el límite inicial: ";
    cin >> inicio;

    cout << "Ingrese el límite final: ";
    cin >> fin;

    for(int i = inicio; i <= fin; i++) {
        int x = i;
        int operaciones = 0;

        while(x > 0) {
            if(x % 3 == 0) {
                x = x + 4;
            }
            else if(x % 4 == 0) {
                x = x / 2;
            }
            else {
                x = x - 1;
            }
            operaciones++;
        }

        cout << i << " > " << operaciones << endl;
    }

    return 0;
}
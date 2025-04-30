#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    
    bool es_primo = true;
    
    if (n <= 1) {
        es_primo = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                es_primo = false;
                break;
            }
        }
    }
    
    if (es_primo) {
        cout << n << " es primo." << endl;
    } else {
        cout << n << " no es primo." << endl;
    }
    
    return 0;
}
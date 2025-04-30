#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    double factorial = 1;  
    double sus = 0.0;      

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;                   
        double susecion = 1.0 / factorial; 
        sus += susecion;                   
    }

    cout << "La suma de la sucesión es: " << sus << endl;
    return 0;
}

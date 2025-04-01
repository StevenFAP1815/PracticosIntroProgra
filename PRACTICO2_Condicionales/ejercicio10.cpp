#include<iostream>
#include<cmath>

using namespace std;

int main(){

    cout << "Ingrese los valores de A y B: "<< endl;
    int A,B;
    cin >> A >> B;

    if (B == 0){
        cout << "IMPOSIBLE" <<endl;
    }
    else{
        float cociente = A/B;
        cout << "El resultado del cociente es: " << cociente <<endl;
    }
    


    return 0;
}
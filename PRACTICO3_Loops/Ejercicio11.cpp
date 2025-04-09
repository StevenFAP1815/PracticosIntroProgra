#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    
    double U = 1.0;
    cout << "U0" << "=" << U <<endl;
    cout << "Ingrese un valor de n para aproximar exp()"<<endl;
    for(int i = 0 ;i<=10; i++ ){
        U = U / (i+1);
        cout << "U" <<i+1<< "=" <<U<<endl;
    }
    
    return 0;
}
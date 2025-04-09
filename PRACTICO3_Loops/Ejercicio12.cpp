#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    
    double U = 1.0;
    double V = 0;
    cout << "Ingrese un valor de n para aproximar exp(1)"<<endl;
    int n;
    cin >>n;
    
    for(int i = 0 ;i<n; ++i){
        U = U / (i+1);
        V = V+U;
        cout << "U" <<i+1<< "=" <<U<< " V" <<i+1<< "=" <<V<<endl;
    }
    return 0;
}
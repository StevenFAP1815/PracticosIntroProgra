#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    
    cout<<"Introduzca el valor de n"<<endl;
    int n;
    cin>>n;
    cout<<"Introduzca el valor de k"<<endl;
    int k;
    cin>>k;
    int sus = 0;
    for(int i = 0; i<=n; i++){
        int res = pow(i, k);
        sus +=res;
    }
    cout << "El resultado de la sucesion es: " << sus <<endl;
    
    return 0;
}
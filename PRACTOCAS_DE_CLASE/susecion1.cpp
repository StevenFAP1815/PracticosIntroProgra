#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main() {
    
    
    cout << "Ingrese el valor de x"<<endl;
    int x;
    cin >> x;
    int i = 0;
    int par = 0;
    int impar = 0;
    
    for(i; i<= x; i++){
        if (i%2 == 0){
            par += -pow(x,i);
        }     
        else{
            impar += pow(x,i);
        }
    }
    
    int resultado = impar - par;
    cout << resultado <<endl;
    
    return 0;
}
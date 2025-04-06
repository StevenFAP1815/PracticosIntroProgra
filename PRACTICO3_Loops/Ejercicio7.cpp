#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
    
    
    int exp;
    cin >> exp;
    double suma = 0.0;
    for(int n = 1; n<=exp; n++){
        suma = suma + pow(-1,1+n)/n;
    }
    cout <<suma<<endl;
    return 0;
}
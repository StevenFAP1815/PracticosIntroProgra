#include<iostream>
#include<cmath>

using namespace std;

int main(){

    cout<<"Ingrese 3 cadenas de texto"<<endl;

    string s1, s2, s3;

    cin >> s1 >> s2 >> s3;

    string minimo = s1;  

    if (s2 < minimo) {  
        minimo = s2;
    }
    if (s3 < minimo) {  
        minimo = s3;
    }

    cout << minimo << endl;


    return 0;
}
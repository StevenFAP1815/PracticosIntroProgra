#include<iostream>
#include<cmath>

using namespace std;

int main(){

    cout << "Introduzca el radio de la esfera: "<<endl;
double radio;
cin >> radio;

if(radio<0){
    cout << "Radius cannot be negative"<<endl;
}
else{
    double area_esfera = 4*M_PI*radio;
}



    return 0;
}
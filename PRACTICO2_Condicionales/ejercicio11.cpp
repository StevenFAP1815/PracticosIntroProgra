#include<iostream>
#include<cmath>

using namespace std;

int main(){

    cout << "Ingrese los valores de R_A, R_B, X e Y"<<endl;
    int N = 400; //Costo original del producto
    int R_A;
    int R_B;
    int X; //Descuento 1
    int Y; //Descuento 2
    cin >> R_A >> R_B >> X >> Y;

    if(N>R_A){
        double descuento1 = N - N * X/100;
        cout << "El descuento del producto con el descuento X es: ";
    }
    if(N>R_B){
        double descuento2 = N - N * Y/100;
    }



    return 0;
}
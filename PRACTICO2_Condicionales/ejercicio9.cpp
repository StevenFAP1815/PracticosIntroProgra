#include<iostream>
#include<cmath>

using namespace std;

int main(){

    cout << "Ingrese los valores de A, B y C: "<<endl;
    
    int A, B, C;
    cin >> A >> B >> C;

    //A no puede ser 0 porque la solucion ya no seria cuadratica sino lineal
    if(A==0){
        cout << "A no puede debe ser distinto de 0"<<endl;
    }
    //El discriminante B^2−4AC ≥ 0 para que las soluciones sean reales
    else{
        double discriminante = pow(B, 2)-4*A*C;
        if (discriminante>=0){
            double x1 = (-B + sqrt(discriminante))/2*A; 
            double x2 = (-B - sqrt(discriminante))/2*A;
            cout<<"El valor de x1 es: "<<x1<<endl;
            cout <<"El valor de x2 es: "<<x2<<endl;
        }   
        else if (discriminante==0){
            cout<<"Ambas raices son iguales"<<endl;
            double x_r = -B/2*A;
            cout <<"El valor de ambas raices es: " <<x_r<<endl;
        }
        else if (discriminante<0) {
            cout << "Las soluciones no pertenecen a los numeros reales"<<endl;
            double x1 = (-B + sqrt(discriminante))/2*A; 
            double x2 = (-B - sqrt(discriminante))/2*A;
            cout<<"El valor de x1 es: "<<x1<<endl;
            cout <<"El valor de x2 es: "<<x2<<endl;
        }    
    }


    return 0;
}
#include<iostream>
#include<cmath>

using namespace std;

int main(){

    cout << "Se le cobrara por horas enteras, no es necesario que ingrese los minutos"<<endl;
    cout << "Ingrese las horas de inicio en formato de 24:00hrs: "<<endl;
    int horas_inicio;
    cin >> horas_inicio;

    cout << "Ingrese las horas de salida en formato de 24:00hrs:" << endl;
    int horas_final;
    cin >> horas_final;
    
    if(horas_inicio < 0 or horas_inicio > 24){
        cout << "ERROR! las horas deben estar entre 0 y 24"<<endl;
    }
    if(horas_final < 0 or horas_final > 24){
        cout << "ERROR! las horas deben estar entre 0 y 24"<<endl;
    }

    int tiempo_uso = horas_final-horas_inicio;
    cout << "Horas de uso de las bicicletas: " << tiempo_uso <<endl;
    int hora_uso;
    int tarifa_hora;
    int horario_1_precio = 1;//En Bs
    int horario_2_precio = 2;//En Bs
    
    if(horas_inicio > horas_final){
        cout << "Las hora de inicio no puede ser mayor a la hora final" <<endl;
    }
    else{
        if(hora_uso >=0 or hora_uso <=7){
            cout << "La tarifa en horarios de 00:00 a 7:00 y de 17:00 a 24:00hrs es de 1bs/hr"<<endl;
            tarifa_hora =  horario_1_precio * tiempo_uso;
            cout << "El total a pagar es: " << tarifa_hora<<endl;
            }
    else if(hora_uso >7 or hora_uso <17){
            cout << "La tarifa de 7:00 a 17:00hrs es de 2Bs/hr"<<endl;
            tarifa_hora = horario_2_precio * tiempo_uso;
            cout << "El total a pagar es: " << tarifa_hora <<endl;
            }
    else if(hora_uso>=17 or hora_uso <=24){
            cout << "La tarifa de 17:00 a 24:00hrs es de 1Bs/hr"<<endl;
            tarifa_hora = horario_1_precio * tiempo_uso;
            cout << "El total a pagar es: " << tarifa_hora <<endl;
            }
        }

    return 0;
}
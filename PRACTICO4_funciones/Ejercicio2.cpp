#include<iostream>
#include<string>
using namespace std;

//Prototipo de la funcion
string call_name(string first_name, string last_name);
int main(){
    
    cout << "Ingrese su primer nombre"<<endl;
    string first;
    cin >> first;
    cout << "Ingrese sy apellido"<<endl;
    string secound;
    cin >> secound;
    
    //Llamada a la funcion
    string result = call_name(first,secound);
    cout <<result<<endl;
    return 0;
}
//Cuerpo de la funcion
string call_name(string first_name, string last_name){
    string conca = first_name + last_name;
    return conca;
}
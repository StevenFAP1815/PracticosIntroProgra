#include<iostream>
#include<cmath>

using namespace std;

int main(){

    cout << "Introduzca la cantidad de segundos: " << endl;
double segundos;
cin >> segundos;

if(segundos<0){
    cout << "Input seconds cannot be negative"<<endl;
}
else{
    double horas = segundos/3600;
    double min = (segundos/3600)/60;
    double seg = segundos / 60;
    cout << horas << ":" <<min << endl;
}

cout<<"Ingrese 5 palabras: "<<endl;
string word1,word2,word3,word4,word5;
cin >> word1>>word2>>word3>>word4>>word5;

char w1 [0];
char w2 [0];
char w3 [0];
char w4 [0];
char w5 [0];

cout << word1 << " "<<word2<< " "<< word3 << " "<<word4 << " "<<word5<<endl;

if(w1 == w5){
    cout <<"Hemos encontrado algo"<<endl;
}
else{
    cout << "Aun sin suerte"<<endl;
}


    return 0;
}
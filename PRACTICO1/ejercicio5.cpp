#include <iostream>

using namespace std;

int main(){
    
    char x = 'A';
    char y = 'B';

  //valores iniciales
    printf("Valores iniciales:\n");
    printf("x = %c\n", x);
    printf("y = %c\n", y);

    char temporal = x;  
    x = y;          
    y = temporal;       

    printf("x = %c\n", x);
    printf("y = %c\n", y);
    return 0;
}
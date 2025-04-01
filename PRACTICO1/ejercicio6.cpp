#include <iostream>

using namespace std;

int main(){

    char n = 'S';
    int age = 15;
    int birth_year = 2003;

    int age_calculed = birth_year + age;
    printf("%c cumplirá %d años en el año %d.\n", n, age, age_calculed);
    
    return 0;
}
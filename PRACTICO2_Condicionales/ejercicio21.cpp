#include<iostream>
#include<cmath>

using namespace std;

int main(){

    
    int m = 51;
    int y = 876;
    int u = 235;

    int temporal = u;
    u = m;
    m = y;
    y = temporal;


    cout << "m = "<<m<<endl;
    cout << "y = "<<y<<endl;
    cout << "u = "<<u<<endl;

    
    return 0;
}
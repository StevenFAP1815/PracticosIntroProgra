#include <iostream>
#include<string>
using namespace std;
int main() {
    
    int visitas = 10;
    for(int i = 0; i<=visitas; i++){
        cout<<"Hay paste?"<<endl;
        int haypastel;
        cin >> haypastel;
        if(haypastel == 1){
            cout << "ñom,ñom,ñom,:p"<<endl;
        }
        
        else if (haypastel == 0){
            cout << "Ya no hay pastel"<<endl;
            break;
        }
        else{
            cout << "Solo 0 o 1"<<endl;
            i--;
        }
    }
    cout << "Sin pastel"<<endl;
    
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    
    double wood_balance = 1000.0;  
    double w1 = 2.0, d1 = 3.0, h1 = 1.5;  
    double w2 = 2.5, d2 = 2.0, h2 = 1.0;  
    double w3 = 3.0, d3 = 3.0, h3 = 2.0;  

    double area1, area2, area3;

  //Para la caja 1
    area1 = (w1 * d1) + 2 * (w1 * h1) + 2 * (d1 * h1);
    wood_balance -= area1; 
    
    cout << "Madera contrachapada restante: " << wood_balance << ".\n";

  // Para la caja 2
    area2 = (w2 * d2) + 2 * (w2 * h2) + 2 * (d2 * h2);
    wood_balance -= area2;  

    cout << "Madera contrachapada restante: " << wood_balance << ".\n";

  // Para la caja 3
    area3 = (w3 * d3) + 2 * (w3 * h3) + 2 * (d3 * h3);
    wood_balance -= area3; 

    cout << "Madera contrachapada restante: " << wood_balance << ".\n";
    return 0;
}
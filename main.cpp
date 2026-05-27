#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");  // Ativa o uso de acentos
    // -------------------------------

    int matriz [3][3];

    matriz[0][0]= 10;
    matriz[0][1]= 20;
    matriz[0][2]= 30;

    matriz[1][0]= 20;
    matriz[1][1]= 40;
    matriz[1][2]= 80;

    matriz[2][0]= 30;
    matriz[2][1]= 60;
    matriz[2][2]= 120;

    cout << matriz[1][1];

    // -------------------------------
    cin.get();
    return 0;
}

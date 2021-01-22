/*
CRIA UMA ESTRUTURA CHAMADA PONTO QUE ACAEITA DOIS PONTOS E CALCULA A DISTANCIA
 */

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct ponto
    {
        int x;
        int y;
    };

int main( void ){
    
    ponto ponto1;
    ponto Ponto2;
    float dista(0);

    cin >> ponto1.x >> ponto1.y;
    cin >> Ponto2.x >> Ponto2.y;

    dista = sqrt( pow( Ponto2.x - ponto1.x, 2 ) + pow( Ponto2.y - ponto1.y, 2 ) );

    cout << "Distancia: " << fixed << setprecision(2) << dista << endl;

    return 0;

}
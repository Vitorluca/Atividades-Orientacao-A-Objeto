#include<iomanip>
#include<iostream>

using namespace std;

union temp
{
    float Celsius;
    float Fahrenheit;
};

int main( void ){

    temp valor;
    int selecao(0);
    float conv(0);

    cout << "0 - para converter de Celsius para Fahrenheit" << "\n" 
    << "1 - para converter de Fahrenheit para Celsius" << endl;

    cin >> selecao;

    if( selecao == 0 ){

        cin >> valor.Celsius;

        conv = (1.8 * valor.Celsius) + 32;

    }
    else
    {
        cin >> valor.Fahrenheit;

        conv = ( valor.Fahrenheit - 32 ) / 1.8;
    }

    cout << fixed << setprecision(2) << conv << endl;

    return 0;

}

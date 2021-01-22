#include<iostream>

using namespace std;

enum cadeiras{

        TECNICAS_DE_PROGRAMACAO,
        ALGEBRA_LINEAR,
        CIRCUITOS_LOGICOS,
        LAB_CIRCUITOS_LOGICOS

    };

int main( void ){
    
    cadeiras primeira = TECNICAS_DE_PROGRAMACAO, segunda = ALGEBRA_LINEAR, terceira = CIRCUITOS_LOGICOS, quarta = LAB_CIRCUITOS_LOGICOS;

    cout << primeira << endl;
    cout << segunda << endl;
    cout << terceira << endl;
    cout << quarta << endl;

    return 0;
    

}
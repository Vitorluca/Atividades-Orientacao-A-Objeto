// simula o funcionamento de um relogio
//DESELVOLVEDOR: VITOR LUCAS DOS SANTOS TEIXEIRA
//MATRICULA: 119110521

#include<iostream>
#include<locale.h>

using namespace std;

#include "relogio.cpp"

int main(void){

    setlocale(LC_ALL, "portuguese");

    relogio casio;

    

}

void fmenu( void ){ //sequencia de strings que indicam as opções que a função loop de seleção pode fazer

    cout << "Selecione a ação que deseja  executar:" << endl; //menu de seleção da ação desejada

        cout << "1- iniciar simulação do relogio" << endl; //string que indica a funçaõ do 1
        cout << "2- setar valor no relogio" << endl; //string que indica a funçaõ do 2
        cout << "3- ver hora atual" << endl;//string que indica a funçaõ do 3
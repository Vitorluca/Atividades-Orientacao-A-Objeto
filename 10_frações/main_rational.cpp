//Executa algumas tarefas com frações, multiplicação, divisão.
// E apresentação dos valores em formato de fração e ponto flutuante
//
//DESENVOLVEDOR: VITOR LUCAS DOS SANTOS TEIXEIRA
//MATRICULA: 119110521
//DATA: 29 09 2020

#include<iostream> //bibilhoteca padão de entrada e saida
#include<locale.h> //agrupa funções relacionadas ao local

using namespace std;
#include "Rational.cpp" // incluir as funções menbros da classe

void fmenu( void ); // prototipo da função menu

int Fatribui( int &numerador, int &denominador ); //prototipo da função atribui



int main( void ){ //função principal

    setlocale(LC_ALL, "portuguese"); //permite a utilização de acentuação usanda no brasil

    Rational fracao1, fracao2, resultado;//cria três objetos da classe rational
    int menu(0), numerador(0), denominador(0);//variaveis que armazenam algumas interações

    do{ // loop "faz antes do teste"

        //indica ao usuario o tipo de ação que sera executada no momento 
        cout << "insira o numerador e denominador da fração 1 respectivamente" << endl;
        Fatribui(numerador, denominador); //chamada da função
        fracao1.setNumerador(numerador); //passa um valor para a função set numerador
        fracao1.setDenominador(denominador);// passa um valor para a função drt denominador

        //indica ao usuario o tipo de ação que sera executada no momento 
        cout << "insira o numerador e denominador da fração 2 respectivamente" << endl;
        Fatribui(numerador, denominador);//chamada da função
        fracao2.setNumerador(numerador); //passa um valor para a função set numerador
        fracao2.setDenominador(denominador); // passa um valor para a função drt denominador


        fmenu(); //chama a funçã menu
        cin >> menu; //variavel menu recebe um valor

        switch(menu) // na pratica faz o pal do menu
        {

        case 1: //caso  for 1 a escolha

            resultado.F_multiplica(fracao1, fracao2); //executa multiplicação de frações
            break; //parra loop

        case 2: //caso  for 2 a escolha

            resultado.F_dividir(fracao1, fracao2); //executa divisão de frações
            break;//para loop

        case 3: //caso  for 3 a escolha

            break; //para loop
        
        default: //caso nehuam das opções forem escolhidas

            break;//para loop
        }

        break;


    }while(true); //teste  do loop(vai rodar até que um break seja executado)

    //apresenta a fração 1 de duas maneiras(fração / ponto flutuante)
        cout << "fração 1: " << fracao1.getNumerador() << "/" << fracao1.getDenominador() << endl;
        cout << "fração 1 ponto flutuante: " << (float)fracao1.getNumerador() / fracao1.getDenominador() << endl;

        //apresenta a fração 2 de duas maneiras(fração / ponto flutuante)
        cout << "fração 2 " << fracao2.getNumerador() << "/" << fracao2.getDenominador() << endl;
        cout << "fração 2 ponto flutuante " << (float)fracao2.getNumerador() / fracao2.getDenominador() << endl;

        //apresenta a fração resultado de duas maneiras(fração / ponto flutuante)
        cout << "fração res " << resultado.getNumerador() << "/" << resultado.getDenominador() << endl;
        cout << "fração res em float " << (float)resultado.getNumerador() / resultado.getDenominador() << endl;

    return 0;


}

void fmenu( void ){ //sequencia de strings que indicam as opções que a função loop de seleção pode fazer

    cout << "Selecione a ação que deseja  executar:" << endl; //menu de seleção da ação desejada

        cout << "1- multiplicar duas frações" << endl; //string que indica a funçaõ do 1
        cout << "2- dividir duas frações" << endl; //string que indica a funçaõ do 2
        cout << "3- Fechar o programa" << endl;//string que indica a funçaõ do 3

}

int Fatribui( int &numerador, int &denominador ){ //função altera os valosres do denominador e numerador

    cin >> numerador >> denominador; // atribui os valores ao numerador e denominador

}
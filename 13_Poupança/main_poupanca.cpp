/*
                                        PROBLEMA 
-----------------------------------------------------------------------------------------------------------------
Crie uma classe em C++ chamada ContaDePoupanca. Use um membro de dados static para 
conter a taxaDeJurosAnual para cada um dos poupadores. Cada membro da classe contém um membro de 
dados private saldoDaPoupanca indicando a quantia que o poupador atualmente tem em depósito. 
Forneça um método membro calculeRendimentoMensal que calcule o rendimento mensal multiplicando 
o saldo pela taxaDeJurosAnual dividida por 12; este rendimento deve ser somado ao saldoDaPoupanca. 
Forneça uma função membro static modifiqueTaxaDeJuros que inicializa a variável static taxaDeJurosAnual 
com um novo valor. Escreva um programa de teste que instancia dois objetos diferentes contaDePoupanca, 
poupador1 e poupador2, com saldos de R$ 2000,00 e R$ 3000,00, respectivamente. Inicialize taxaDeJurosAnual
com 6%, então calcule o rendimento mensal e imprima os novos saldos para cada um dos poupadores.
Inicialize então a taxaDeJurosAnual com 8%, calcule o rendimento do próximo mês e imprima o novo saldo
 para cada um dos poupadores.
------------------------------------------------------------------------------------------------------------------
 DEVELOPER: VITOR LUCAS DOS SANTOS TEIXEIRA
 MATRICULA: 119110521
 DATA: 06 10 2020
*/
#include<iostream> //adiciona a ibilhoteca padrão de entrada e saida
#include<clocale> //possibilita a acentuação de caracteres em  c++ segundo a norma brasileira

using namespace std; // evita que funções diferentes segão interpretadas como sendo a mesma função

#include "poupanca.h" //inclui o prototipo da classe 
#include "poupanca.cpp" // inclui os funções-menbro(metodos) da classe

void f_menu( void ); // prototipo da função menu
void f_selecao( int opcao, ContaDePoupanca &pesssoa1,ContaDePoupanca &pesssoa2 );//prototipo da função
void f_caso1( int saldo, ContaDePoupanca &pesssoa1,ContaDePoupanca &pesssoa2 );//prototipo da função

int main( void ){ //função principal

    setlocale(LC_ALL, "portuguese"); //posibilita que palavras acentuadas possam ser inpressas na tela

    int menu(0); // criação da variavel menu 
    ContaDePoupanca pesssoa1, pesssoa2; //criação de dois objetos da calsse poupança 

    do{ //loop que executa as ações descritas em seu corpo e depois testa a condição de parada

        f_menu(); //chamada da função menu 
        cin >> menu; // variavel menu reecebe um valor do usuario

        if(menu == 5){ //verifica se menu é igual a 4

            break; //interrompe  o do while
        }

        f_selecao( menu, pesssoa1, pesssoa2 ); //chamada da função passando a variavel menu como parametro

    }while( true ); //

    

    return 0; // indica o termino bem sucedido da função main e por consequencia do programa

}

void f_menu( void ){ //função apresenta um conjutno de inpressoes na tela que indicam as opções do usuario

    cout << "Digite o numero que corresponde a ação desejada" << endl;
    cout << "1 - Depositar dinherio " << endl;
    cout << "2 - Modificar Taxa de Juros " << endl;
    cout << "3 - Exibir saldo e juros atuais" << endl;
    cout << "4 - calcular rendimento da poupança" << endl;
    cout << "5 - Fechar Programa" << endl;

}

void f_selecao( int opcao, ContaDePoupanca &pesssoa1,ContaDePoupanca &pesssoa2 ){ //função chama funções de acordo com o numero digitado pelo usuario

    int saldo(0); //armazenam tenporariamente os valores que serão passados para as funções

    float juros(0); //armazenam tenporariamente os valores que serão passados para as funções

    switch (opcao) //define varios casos onde cada caso executa ações diferentes
    {
    case 1: //ativado caso o ususario digite 1

        f_caso1(saldo, pesssoa1, pesssoa2); //chamada da função caso 1
        break; //encerra o switch
        
    case 2: //ativado caso o ususario digite 2

        cin >> juros;
        ContaDePoupanca::modifiqueTaxaDeJuros(juros); //função midifica taxa de juros e chamada
        break;//encerra o switch

    case 3: //ativado caso o ususario digite 3

        cout << "saldo pessoa 1: " << pesssoa1.getSaldo() << endl;
        cout << "saldo pessoa 2: " << pesssoa2.getSaldo() << endl;
        cout << "taxa de juros: " << ContaDePoupanca::getJuros() << endl;
        break;//encerra o switch

    case 4://ativado caso o ususario digite 4

        pesssoa1.calculeRendimentoMensal(); //calcula o rendimento da poupanca 1
        pesssoa2.calculeRendimentoMensal(); //calcula o rendimento da poupanca 1
    
    default: //caso nenhum dos casos sejam verdade a "opção" defaaut é executada
        break;//encerra o switch
    }
    
}

//atribui uma valor as poupanças 
void f_caso1( int saldo, ContaDePoupanca &pesssoa1,ContaDePoupanca &pesssoa2 ){ 

    cout << "insira o valor que deseja depositar da pessoa 1: " <<  endl;
    cin >> saldo; //o usuario atribui um valor ao saldo
    pesssoa1.setSaldo( saldo ); //o valor é passado para a função menbro

    cout << "insira o valor que deseja depositar da pessoa 2: " <<  endl;
    cin >> saldo; //o usuario atribui um valor ao saldo
    pesssoa2.setSaldo( saldo ); //o valor é passado para a função menbro

}
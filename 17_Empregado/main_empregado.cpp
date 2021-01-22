/*

programa cria um objeto funcionario e define algumas de suas caracteristicas como nome e CPF
alem de calcular seu salario

DESENVOLVEDOR:  VITOR LUCAS DOS SANTOS TEIXEIRA
MATRICULA: 119110521
DATA: 23 / 10 / 2020;

COMPILADOR UTILIZADO: gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
IDE: Visual Studio Code

*/


#include<iostream> //inclui a bibilhoteca basica de entrada e saida de informação
#include<clocale> //bibilhoteca de configuração especificas da localidade
#include<cstring>

using namespace std; //define que o escopo utilizado é o std

#include "metodos_pessoa.cpp" // inclui o arquivo metodos_pessoa.cpp
#include "metodos_empregado.cpp" // inclui o arquivo metodos_empregado.cpp

void Fmenu( void ); //protitipo da função menu
void Fselecao(int &menu , empregado &funcionario); //prototipo da função seleção

int main( void ){ //função principal

    setlocale(LC_ALL, "portuguese"); //define que utilização cacacteres e especificidades do portugues
    int menu(0); //criação da variavel inteira menu
    empregado funcionario( "ROCKY BALBOA", 741258963 ); //estanciamento do objeto funcionario 

    do{ // loop que executa seu conteudo primeiro para depois testar sua condição
  
        Fmenu(); // função menu é chamada pela main
        cin >> menu; // variavel menu recebe um valor 

        if( menu <= 4 && menu >= 1 ){ // garante que a variavel menu comtemple os valores esperados

            funcionario.calcularSalario(); //calcula o salario liquido do funcionario
            Fselecao( menu, funcionario ); //função seleção é chamada na main
        }
        if( menu > 5 && menu < 1 ){ //testa se o valor de menu esta fora do esperado

            cout << "ERRO, digite um numero valido" << endl; //imprime na tela uma mensagem de erro
        }

    }while( menu != 5 ); //executa o teste que mantem ou não o loop
    

    return 0; // retorna 0 caso o programa funcione como previsto

}

void Fmenu( void ){ //possui um conjunto de strings que apresenta ao usuario suas opções

    cout << "Digite o numero que corresponde a ação desejada" << endl;
    cout << " " << endl;

    cout << "1- Alterar o numero da seção do funcionario" << endl;
    cout << "2- Alterar salario base" << endl;
    cout << "3- alterar imposto de renda sobre o salario" << endl;
    cout << "4- ficha do funcionario" << endl;
    cout << "5- fechar programa" << endl;

}

//define que de acordo com o valor digitado uma rotina especifica será eexecutada
void Fselecao(int &menu , empregado &funcionario){

    int numeroSecao(0); //criação de uma variavel auxiliar que armazena o numero de seção
    long double salario(0); //criação de uma variavel auxiliar que armazena o salario
    float imposto(0); //criação de uma variavel auxiliar que armazena o imposto
    string pausa = " "; //criação de uma variavel "sentinela"

    system("clear"); //função nativa do UBUNTU( no WINDOWS subistituisse "clear" por "cls" )

    switch ( menu ) // estrutura de seleção de rotina 
    {
    case 1: //rotina caso menu seja igual a 1

        cout << "Insira o novo numero da seção: " << endl; //descreve a ação pedida
        cin >> numeroSecao; //numero seção recebe um valor
        funcionario.setNumeroSecao( numeroSecao ); //metodo do objeto que altera o numero seção é chamado
        system("clear"); //função nativa do UBUNTU( no WINDOWS subistituisse "clear" por "cls" )
        break; // encerra a estrutura de seleção switch
    
    case 2: //rotina caso menu seja igual a 2

        cout << "Insira o novo salario do funcionario: " << endl;//descreve a ação pedida
        cin >> salario; //salario recebe um valor
        funcionario.setSalarioBase( salario ); //metodo do objeto que altera o salario é chamado
        system("clear"); //função nativa do UBUNTU( no WINDOWS subistituisse "clear" por "cls" )
        break; // encerra a estrutura de seleção switch

    case 3: //rotina caso menu seja igual a 3

        //descreve a ação pedida
        cout << "Insira o imposto sobre o salario( o imposto pode variar de 0 a 100% ): " << endl;
        cin >> imposto; //imposto recebe um valor
        funcionario.setIR( imposto ); //metodo do objeto que altera o imposto é chamado
        system("clear"); //função nativa do UBUNTU( no WINDOWS subistituisse "clear" por "cls" )
        break; // encerra a estrutura de seleção switch

    case 4:

        cout << "Ficha do funcionario" << endl; //descreve a ação que sera executada
        funcionario.imprimeLiquidoSecao( ); // chama o metodo que enprime os atributos do objeto

        do{ // loop que executa seu conteudo primeiro para depois testar sua condição

            cout << "-------------------------------------------------------" << endl;//somente estética
            cout << "Digite enter para finalizara a visualização" << endl; //informa ao usuario a ação 
            getline(cin, pausa); //pausa recebe uma string

        }while( cin.peek() != '\n' );//verifica se a tecla digitada foi o ENTER

        system("clear");//função nativa do UBUNTU( no WINDOWS subistituisse "clear" por "cls" )
        break; // encerra a estrutura de seleção switch

    default: //executado caso nehum dos casos esperados seja executado

        break;// encerra a estrutura de seleção switch
    }

}
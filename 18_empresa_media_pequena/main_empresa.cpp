/*

programa cria um classe base e duas classes derivadas

DESENVOLVEDOR:  VITOR LUCAS DOS SANTOS TEIXEIRA
MATRICULA: 119110521
DATA: 31 / 10 / 2020;

COMPILADOR UTILIZADO: gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
IDE: Visual Studio Code

*/


#include<iostream> //inclui a bibilhoteca basica de entrada e saida de informação
#include<clocale> //bibilhoteca de configuração especificas da localidade
#include<cstring>

using namespace std; //define que o escopo utilizado é o std

#include "metodos_empresa.cpp" // inclui o arquivo metodos_empresa.cpp
#include "metodos_medioPorte.cpp" // inclui o arquivo metodos_medioPorte.cpp
#include "metodos_pequenoPorte.cpp" //  inclui o arquivo metodos_pequenoPorte.cpp contendo os metodos

void Fmenu( void ); //protitipo da função menu
void Fselecao( int &menu ); //prototipo da função seleção

void Fmedio( int &menu ); //prototipo da função media
void Fpequeno( int &menu ); // prototipo da função pequena 

void menuMedio( void ); // prototipo da função menu media
void menuPequeno( void );// prototipo da função menu pequeno

void selecaoMedio( int &menu ); // prototipo da função seleção menu
void selecaoPequeno( int &menu ); // prototipo da função seleção pequeno

int main( void ){ //função principal

    setlocale(LC_ALL, "portuguese"); //define que utilização cacacteres e especificidades do portugues
    int menu(0); //criação da variavel inteira menu 

    do{ // loop que executa seu conteudo primeiro para depois testar sua condição
  
        Fmenu(); // função menu é chamada pela main
        cin >> menu; // variavel menu recebe um valor 

        if( menu <= 2 && menu >= 1 ){ // garante que a variavel menu comtemple os valores esperados

            Fselecao( menu );
        }
        if( menu > 3 && menu < 1 ){ //testa se o valor de menu esta fora do esperado

            cout << "ERRO, digite um numero valido" << endl; //imprime na tela uma mensagem de erro
        }

    }while( menu != 3 ); //executa o teste que mantem ou não o loop

    return 0; // retorna 0 caso o programa funcione como previsto
}

void Fmenu( void ){ //possui um conjunto de strings que apresenta ao usuario suas opções

    cout << "Digite o numero que corresponde a ação desejada" << endl;
    cout << " " << endl;

    cout << "1- empresa de medio porte" << endl;
    cout << "2- empresa de pequeno porte" << endl;
    cout << "3- Fechar o programa" << endl;


}

//define que de acordo com o valor digitado uma rotina especifica será eexecutada
void Fselecao( int &menu ){

    system("clear"); //função nativa do UBUNTU( no WINDOWS subistituisse "clear" por "cls" )

    switch ( menu ) // estrutura de seleção de rotina 
    {
    case 1: //rotina caso menu seja igual a 1

        Fmedio( menu ); // chama a função medio
        break;
    
    case 2: //rotina caso menu seja igual a 2

        Fpequeno( menu ); // chama a função pequeno
        break;

    default: //executado caso nehum dos casos esperados seja executado

        break;// encerra a estrutura de seleção switch
    }

}

void Fmedio( int &menu ){

    do
    {
        menuMedio( );
        cin >> menu;
        selecaoMedio( menu );

    } while (menu != 6);

}

void Fpequeno( int &menu ){

    do
    {
        menuPequeno( );
        cin >> menu;
        selecaoPequeno( menu );

    } while (menu != 7);

}

void menuMedio( void ){

    cout << "Digite o numero que corresponde a ação desejada" << endl;
    cout << " " << endl;

    cout << "1- alterar CGC: " << endl;
    cout << "2- alterar nome da empresa" << endl;
    cout << "3- alterar imposto" << endl;
    cout << "4- alterar faturamento" << endl;
    cout << "5- imprimir atributos" << endl;
    cout << "6- fechar programa" << endl;


}

void menuPequeno( void ){

    cout << "Digite o numero que corresponde a ação desejada" << endl;
    cout << " " << endl;

    cout << "1- alterar CGC: " << endl;
    cout << "2- alterar nome da empresa" << endl;
    cout << "3- alterar imposto" << endl;
    cout << "4- alterar faturamento" << endl;
    cout << "5- situação de cadastro no SIMPLES" << endl;
    cout << "6- imprimir informações sobre o objeto" << endl;
    cout << "7- fechar programa" << endl;

}

void selecaoMedio( int &menu ){

    static medioPorte sede;
    double CGC; // CGC da empresa
    string nome; // nome da empresa 
    bool porte(true); // define que a impresa é de medio porte
    float impostoBase; // imposto base sobre as empresas
    long double faturamento; // faturameneto da empresa

    switch ( menu )
    {
    case 1:

        cout << "digite o novo CGC: " << endl;
        cin >> CGC;
        sede.setCGC( CGC );
        break;

    case 2:

        cout << "digite o nome da empresa: " << endl;
        setbuf( stdin, NULL );
        getline(cin, nome);
        sede.setNome( nome );
        break;

    case 3:

        cout << "digite o novo imposto: " << endl;
        cin >> impostoBase;
        sede.setImposto( impostoBase );
        break;

    case 4:

        cout << "alterar faturamento: " << endl;
        cin >> faturamento;
        sede.setFaturamento( faturamento );
        break;

    case 5:
        system("clear || cls");
        sede.imprimeAtributos( );
    
    default:
        break;
    }

}

void selecaoPequeno( int &menu ){

    static pequenoPorte sede;
    double CGC; // CGC da empresa
    string nome; // nome da empresa 
    bool porte(true); // define que a impresa é de medio porte
    float impostoBase; // imposto base sobre as empresas
    long double faturamento; // faturameneto da empresa
    bool SIMPLES;

    switch ( menu )
    {
    case 1:

        cout << "digite o novo CGC: " << endl;
        cin >> CGC;
        sede.setCGC( CGC );
        break;

    case 2:

        cout << "digite o nome da empresa: " << endl;

        setbuf( stdin, NULL );

        getline(cin, nome);
        sede.setNome( nome );
        break;

    case 3:

        cout << "digite o novo imposto: " << endl;
        cin >> impostoBase;
        sede.setImposto( impostoBase );
        break;

    case 4:

        cout << "alterar faturamento: " << endl;
        cin >> faturamento;
        sede.setFaturamento( faturamento );
        break;

    case 5:

        cout << "esta no cadastro do SIMPLES?( sim ou nao )" << endl;
        setbuf( stdin, NULL );
        getline(cin, nome);
        SIMPLES = (nome == "sim") ? true : false; 
        sede.setSIMPLES( SIMPLES );
        break;

    case 6:

        system("clear || cls");
        sede.imprimeSIMPLES( );
    
    default:
        break;
    }

}
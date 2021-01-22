/*

programa criar uma classe base produto e duas classes derivadas, onde cada classe derivada possui
um desconto caso o limite de estoque tenha sido utrapassado, por fim imprimi-se o nome o estoque e
o preço do produto.

DESENVOLVEDOR: VITOR LUCAS DOS SANTOS TEIXEIRA

DATA: 02 - 11 - 2020

COMPILADOR: gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0

IDE: VS CODE

*/

#include <iostream> // bibilhoteca padrão de entrada e saida
#include <clocale> // bibilhoteca sobre especificidades do local( pontuação por exemplo )

using namespace std; //define que as funções são do escopo de entrada e saisa padrões

#include "metodos_produto.cpp" //inclui os metodos da clsse produto
#include "metodos_produto1.cpp" //inclui os metodos da clsse produto1
#include "metodos_produto2.cpp" //inclui os metodos da clsse produto2

void Fmenu( void ); //protitipo da função menu
void Fselecao( int &menu ); //prototipo da função seleção

void Fproduto1( int &menu ); //prototipo da função media
void Fproduto2( int &menu ); // prototipo da função pequena 

void menuProduto1( void ); // prototipo da função menu media
void menuProduto2( void );// prototipo da função menu pequeno

void selecaoProduto1( int &menu ); // prototipo da função seleção menu
void selecaoProduto2( int &menu ); // prototipo da função seleção pequeno

int main( void ){ //função principal

    setlocale(LC_ALL, "portuguese"); //define que utilização cacacteres e especificidades do portugues
    int menu = 0; //criação da variavel inteira menu 

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

    cout << "1- Produto1" << endl;
    cout << "2- Produto2" << endl;
    cout << "3- Fechar o programa" << endl;


}

//define que de acordo com o valor digitado uma rotina especifica será eexecutada
void Fselecao( int &menu ){

    system("clear"); //função nativa do UBUNTU( no WINDOWS subistituisse "clear" por "cls" )

    switch ( menu ) // estrutura de seleção de rotina 
    {
    case 1: //rotina caso menu seja igual a 1

        Fproduto1( menu ); // chama a função produto 1
        break;
    
    case 2: //rotina caso menu seja igual a 2

        Fproduto2( menu ); // chama a função produto 2
        break;

    default: //executado caso nehum dos casos esperados seja executado

        break;// encerra a estrutura de seleção switch
    }

}

void Fproduto1( int &menu ){ //função agrega funções sobre produto1

    do //loop executa primeiro e testa apos a primeira execução
    {
        menuProduto1( ); //chama função menu produto1
        cin >> menu; // usuario altera o valor de menu
        selecaoProduto1( menu ); // chma a função seleção produto1

    } while (menu != 5); // condição para o procegmento do loop

}

void Fproduto2( int &menu ){ //função agrega funções sobre produto1

    do //loop executa primeiro e testa apos a primeira execução
    {
        menuProduto2( ); //chama função menu produto1
        cin >> menu; // usuario altera o valor de menu
        selecaoProduto2( menu ); // chma a função seleção produto1

    } while (menu != 5); // condição para o procegmento do loop

}

void menuProduto1( void ){ // conjunto de strings que indicão ao usario suas opções

    cout << "Digite o numero que corresponde a ação desejada" << endl;
    cout << " " << endl;

    cout << "1- alterar estoque: " << endl;
    cout << "2- alterar nome do produto" << endl;
    cout << "3- alterar preço do produto" << endl;
    cout << "4- imprimir atributos" << endl;
    cout << "5- fechar programa" << endl;


}

void menuProduto2( void ){ // conjunto de strings que indicão ao usario suas opções

    cout << "Digite o numero que corresponde a ação desejada" << endl;
    cout << " " << endl;

    cout << "1- alterar estoque: " << endl;
    cout << "2- alterar nome da empresa" << endl;
    cout << "3- alterar preço do produto" << endl;
    cout << "4- imprimir atributos" << endl;
    cout << "5- fechar programa" << endl;

}

void selecaoProduto1( int &menu ){

    static produto1 macarrao(200); // objeto da classe derivada produto1
    long int estoque; // estoque do produto
    string nome; // nome do produto 
    double preco; // preço do produto

    switch ( menu ) // estrutura de seleção
    {
    case 1: //rotina caso menu seja igual a 1

        cout << "digite o novo estoque: " << endl; //indica ao usuario o que fazer
        cin >> estoque; // variavel estoque recebe um valor do usuario
        macarrao.setEstoque( estoque ); // função menbro do objeto recebe uma variavel
        macarrao.desconto( ); // função menbro desconto é chamada
        break; // interronpe o switch

    case 2: //rotina caso menu seja igual a 2

        cout << "digite o nome do produto: " << endl; //indica ao usuario o que fazer
        setbuf( stdin, NULL ); //"limpa o buffer da entrada padrão"
        getline(cin, nome); // variavel nome recebe uma array char( string )
        macarrao.setNome( nome ); //chama o metodo que altera o nome do objeto e passsa uma variavel
        break; // interronpe o switch

    case 3: //rotina caso menu seja igual a 3

        cout << "alterar o preço do produto: " << endl; //indica ao usuario o que fazer
        cin >> preco; // variavel preco recebe um valor do usuario
        macarrao.setPreco( preco );// função menbro do objeto recebe uma variavel
        macarrao.desconto( );//função menbro desconto é chamada
        break; // interronpe o switch

    case 4: //rotina caso menu seja igual a 4
        system("clear || cls"); //"linpa" o terminal
        macarrao.imprime( ); // imprime alguas das variaveis-menbro do objeto
        break; // interronpe o switch
    
    default: // executado caso nenhum dos cases anteriores seja executados

        break;  // interronpe o switch
    }

}

void selecaoProduto2( int &menu ){

       static produto2 macarrao(100); // objeto da classe derivada produto1
    long int estoque; // estoque do produto
    string nome; // nome do produto 
    double preco; // preço do produto

     switch ( menu ) // estrutura de seleção
    {
    case 1: //rotina caso menu seja igual a 1

        cout << "digite o novo estoque: " << endl; //indica ao usuario o que fazer
        cin >> estoque; // variavel estoque recebe um valor do usuario
        macarrao.setEstoque( estoque ); // função menbro do objeto recebe uma variavel
        macarrao.desconto( ); // função menbro desconto é chamada
        break; // interronpe o switch

    case 2: //rotina caso menu seja igual a 2

        cout << "digite o nome do produto: " << endl; //indica ao usuario o que fazer
        setbuf( stdin, NULL ); //"limpa o buffer da entrada padrão"
        getline(cin, nome); // variavel nome recebe uma array char( string )
        macarrao.setNome( nome ); //chama o metodo que altera o nome do objeto e passsa uma variavel
        break; // interronpe o switch

    case 3: //rotina caso menu seja igual a 3

        cout << "alterar o preço do produto: " << endl; //indica ao usuario o que fazer
        cin >> preco; // variavel preco recebe um valor do usuario
        macarrao.setPreco( preco );// função menbro do objeto recebe uma variavel
        macarrao.desconto( );//função menbro desconto é chamada
        break; // interronpe o switch

    case 4: //rotina caso menu seja igual a 4
        system("clear || cls"); //"linpa" o terminal
        macarrao.imprime( ); // imprime alguas das variaveis-menbro do objeto
        break; // interronpe o switch
    
    default: // executado caso nenhum dos cases anteriores seja executados

        break;  // interronpe o switch
    }

}


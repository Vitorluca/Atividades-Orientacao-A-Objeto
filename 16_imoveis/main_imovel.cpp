/*

Crie a classe Imóvel, que possui como atributos um endereço e um preço. Esta classe não terá métodos, somente o construtor que irá inicializar os valores do seu atributo.

a. Crie uma classe Novo, que herda Imóvel e possui uma porcentagem de adicional no preço (que é fixa). Crie métodos de acesso e impressão deste valor adicional. 
b. Crie uma classe Velho, que herda Imóvel e possui uma porcentagem de desconto no preço (que é fixa). Crie métodos de acesso e impressão para este desconto. 

Os construtores das classes derivadas devem repassar para a classe base os valores referentes a endereço e preço. Faça atenção como devem ser declarados os atributos da classe base para que a classe derivada possa ter acesso.


Na main, crie um imóvel. Peça para o usuário digitar 1 para novo e 2 para velho. Conforme a definição do usuário, imprima o valor final do imóvel.

*/
#include<iostream>
#include<clocale>

using namespace std;

//#include "imovel.h"
//#include "novo.h"
//#include "velho.h"

#include "metodos_imovel.cpp"
#include "metodos_velho.cpp"
#include "metodos_novo.cpp"

void Fmenu( void );
void Fnovo(int &menu );
void Fvelho(int &menu );

float Fnovo_menu(int menu , novo &casa);
float Fvelho_menu(int menu , velho &casa);

int main( void ){

    setlocale(LC_ALL, "portuguese");
    int menu(0);

    system("clear");

    do{

        Fmenu();
        cin >> menu;

        system("clear");

        switch(menu){

        case 1:

            Fnovo( menu );
            break;
        
        case 2:

            Fvelho( menu );
            break;

        default:

            menu = 3;
            break;

        }

        




    }while( menu != 3 );
    

    return 0;

}

void Fmenu( void ){

    cout << "Digite o numero que corresponde a ação desejada" << endl;
    cout << " " << endl;

    cout << " 1- imovel novo" << endl;
    cout << " 2- imovel velho" << endl;
    cout << "3- Fechar programa" << endl;

}

void Fnovo(int &menu ){

    static novo casa( "Rua Jacinto Leite Aquino Rego", 1025.598 );

    cout << " 1- ver taxa: " << endl;
    cout << " 2- alterar taxa: " << endl;

    cin >> menu;

    system("clear");

    Fnovo_menu(menu, casa);

}

float Fnovo_menu(int menu , novo &casa){

    float taxa(0);

    switch (menu)
    {
    case 1:

        cout << "Taxa atual: " << casa.getAdicional() << endl;
        break;

    case 2:

        cout << "ensira a nova taxa: " << endl;
        cin >> taxa;
        casa.setAdicional( taxa );
        break;
    
    default:

        break;
    }

    // system("clear");

}

void Fvelho(int &menu ){

    static velho casa( "Rua Jacinto Leite Aquino Rego", 1025.598 );

    cout << " 1- ver taxa: " << endl;
    cout << " 2- alterar taxa: " << endl;

    cin >> menu;
    system("clear");
    Fvelho_menu(menu, casa);

}

float Fvelho_menu(int menu , velho &casa){

    float taxa(0);

    switch (menu)
    {
    case 1:

        cout << "Taxa atual: " << casa.getDesconto() << endl;
        break;

    case 2:

        cout << "ensira a nova taxa: " << endl;
        cin >> taxa;
        casa.setDesconto( taxa );
        break;
    
    default:

        break;
    }

    //system("clear");

}
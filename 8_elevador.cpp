//elevador, que possui como atributos, numero de andares, capacidade, quantidade de pessoas no 
//momento e andar atual.
//e possui as seguintes funções menbros, inicializa, entra, sai, sobe, dece, sets(para 
// modificar os atributos do objeto)

//desenvolvedor: VITOR LUCAS DOS SANTOS TEIXEIRA
//MATRICULA: 119110521

#include<iostream>

using namespace std;

class elevadores{ //classe elevadores

    private:

        int andares; //quantidade de andares do predio
        int capacidade; // capacidade do elevador
        int quantidadePesoas; // quantidade de pessoas no momento
        int andarAtual; // andar em que o elevador se encontra no momento

    public:

        elevadores(); // construtor que inicializa os atributos
        void inicializa( int, int );// semelhante ao costrutor, com diferencial: pode ser chamado na main

        void entra(void);//acresenta uma pessoa ao elevador
        void sai(void); // elimina uma pessoa do elevador
        void sobe(void); // sobe um andar
        void dece(void); //dece um andar

        void setAndares(int); // altera a quantidade de elevadores
        void setCapacidade(int); // altera a capacidade do elevador
        void setQuantidade(int); // altera a quantidade de pessoas no momento
        void setAndarAtual(int); // altera o andar atual do elevador
};

elevadores::elevadores(){

    andares = 7; //inicializa a quantidade de andares
    capacidade = 8; // inicializa capacidade do elevador
    quantidadePesoas = 0; // inicializa a quantidade de pessoas iniciais no elevador 
    andarAtual = 0; // inicializa o andar original(andar 0) no elevador

}

//função que altera a capacidade do elevador e altera a quantidade de andares
void elevadores::inicializa(int quantidade, int numAndares){ 

    andares = numAndares; // altera a quantidade de andares(valor proveniente da main)
    capacidade = quantidade; // altera a capacidade do elevador(valor proveniente da main)
    quantidadePesoas = 0; // altera a quantidade de pessoas para o estado original
    andarAtual = 0; // altera o andar atual para o estado original

}

void elevadores::entra(void){ //adiciona uma pessoa ao elevador

    if( quantidadePesoas < capacidade ){ //garante que a quantidade de pessoas dentro do padrão

        ++quantidadePesoas; //imcrementa em 1 a quantidade de pessoas

    }

}

void elevadores::sai(void){ // retira uma pesssoa do elevador

    if( quantidadePesoas > 0 ){ //evita que o elevador tenha uma quantidade negativa de pessoas

        --quantidadePesoas;// decrementa em 1 a quantidade de pessoas dentro do elevador

    }

}

void elevadores::sobe(void){ //o elevador sobre um andar

    if( andarAtual < andares ){ //evita que o elevador va para o proximo andar caso esteja no ultimo

        ++andarAtual; //incrementa em 1 o andar atual

    }

}

void elevadores::dece(void){// dece o elevador

    if( andarAtual > 0 ){ // evita que o elevador dessa abaixo do terreo

        --andarAtual; //decrementa em 1 o andar atual do elevador

    }

}

void elevadores::setAndares(int ANDARES){ // altera o quantidade de andares do predio

    andares = ANDARES; // o atributo andares recebe ANDARES(variavel proveniente da main)

}

void elevadores::setCapacidade(int CAPACIDADE){ //altera a capacidade do elevador

    capacidade = CAPACIDADE; // o atributo capacidade recebe CAPACIDADE(PROVENIENTE da main)

}

void elevadores::setQuantidade(int pessoasAtuais){ // altera a quantidade de pessoas no elevador

    quantidadePesoas = pessoasAtuais; // o atributo quantidade de pessoas recebe quantidades atuais(main)

}

void elevadores::setAndarAtual(int ATUAL){ // altera o andar atual

    andarAtual = ATUAL; // andar atual recebe ATUAL(proveniente da main)

}

void fmenu( void ); // prototipo da função menu

//prototipo da função loop de seleção
void floopdeSelecao(int andares, int capacidade, int pessoasAtuais, int ATUAL, elevadores elevador1);


int main(void){ //função principal

    elevadores elevador1; // objeto elevador

    //variaveis necessaris para a execução do programa
    int menu(0), andar(0), capacidade(0), pessoasAtuais(0), AndarAtual(0);


    do{ //repete ate que o usuario decida incerrar o programa

        cout << "SELECIONE A OPERACAO DESEJADA:" << endl; //menu de seleção da ação desejada

        cout << "1- Entrar no elevador" << endl;
        cout << "2- Sair do elevador" << endl;
        cout << "3- Subir o elevador" << endl;
        cout << "4- Decer o elevador" << endl;
        cout << "5- Alterar algum atributo: " << endl;
        cout << "6- Função inicializa: " << endl;
        cout << "7- Fechar o programa" << endl;

        cin >> menu; //variavel que armazena qual a opção desejada

        if(menu == 7){ // para o programa

            break;
        }
        
        switch (menu) // lista das ações que podem ser tomadas
        {
        case 1: // adiciona pessoa ao elevador

            elevador1.entra(); //chama metodo do objeto que encrementa em 1 a quantidade de pessoas
            break; //para função

        case 2: // elimina uma pessoa do elevador

            elevador1.sai(); // chama função menbro, retirando assim uma pessoa do elevador
            break;

        case 3: // sobe o andar do elevador

            elevador1.sobe(); // chama a função menbro, incrementa em 1 o andar atual
            break;

        case 4: // dece o andar do elevador

            elevador1.dece(); //chama função menbro, e decrementa em 1 o andar
            break;

        case 5: //permite a alteração de qualquer atributo da função

            fmenu(); //apresenta uma sequencia de strings que descrevem as opçoes que a função executa

            //efetivamente recebe um valor, e o passa para a função set em questão
            floopdeSelecao(andar, capacidade, pessoasAtuais, AndarAtual, elevador1);

            break; //para funçao

        case 6:

            elevador1.inicializa(8, 7);
        
        default: // retorna break caso nenhum case seja ativado 

            break;
        }

    }while(true); // loop

    return 0; //retorna 0 caso o programa tenha funcionado como previsto

}

void fmenu( void ){ //sequencia de strings que indicam as opções que a função loop de seleção pode fazer

    cout << "Selecione o atributo que deseja  alterar:" << endl; //menu de seleção da ação desejada

        cout << "1- Andares" << endl;
        cout << "2- Capacidade" << endl;
        cout << "3- Quantidade atual" << endl;
        cout << "4- Andar atual" << endl;

}

//evetivamente passa o valor alterado para a função set
void floopdeSelecao(int andares, int capacidade, int pessoasAtuais, int ATUAL, elevadores elevador1){

    int menu(0); //variavel que armazena qual opção foi escolhida

    cin >> menu; // menu recebe um valor

    switch (menu) // estrutura de seleção
    {
    case 1: //ativado quando se deseja alterar o atributo andares

        cin >> andares; //variael temporaria recebe o valor desejado
        elevador1.setAndares(andares); //valor e passado para a função set andares
        break; //para função

    case 2: //ativado quando a capacidade do elevador for alterada

        cin >> capacidade; // variavel ospedeira recebe o valor desejado
        elevador1.setCapacidade(capacidade); //valor é passado para a função set capacidade
        break; // para a função

    case 3: // ativado quando se deseja alterar a quantidade de pessoas no elevador 

        cin >> pessoasAtuais; //variavel temporaria que recebe temporariamente o valor desejado
        elevador1.setQuantidade(pessoasAtuais); // valor é passado para a função set quantidade
        break; // paa função 

    case 4: //ativado quando se deseja altera o andar atual

        cin >> ATUAL; //variavel tmporaria recebe o valor desejado
        elevador1.setAndarAtual(ATUAL); // valor é passado para função set andar atual
        break; // para função
    

    default: // ativado caso nehum dos case seja ativado

        break; //pada função
    }

}
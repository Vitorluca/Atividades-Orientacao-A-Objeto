//UMA TELEVISÃO QUE AUMENTA E DIMINUE O VOLUME, COMO TAMBEM AUMENTA E DIMINUE OS CANAIS
//TAMBEM É POSSIVEL SELECIONAR UM CANAL ESPECIFICO.
//IDE USADA: visual studio code
//desenvolvedor: VITOR LUCAS DOS SANTOS TEIXEIRA
//MATRICULA: 119110521

#include<iostream>

using namespace std;

class televisores{ // classe televisão

private:

    int volume; //atributo volume
    int canal;  //atributo canal

public:

    televisores();

    void aumentaVolume( void ); //metodo que aumenta o volume
    void diminueVolume( void ); // metodo que deminui o volume
    void aumentaCanal( void ); // metodo que aumenta o canal 
    void diminueCanal( void ); // metodo que diminui o canal
    void alteraCanal( void ); // metodo que permite selecionar o canal desejado
    int getCanal( void ); // retorna o valor atual de canal
    int getVolume(void); // retorna o canal atual de volume

};

televisores::televisores(){

    volume = 25; // seta o volume em 25
    canal = 1; // seta o canal em 1

}

void televisores::aumentaVolume(void){ // aumenta o volume 

    if(volume < 100){ // verifica se o volume já chegou em seu limite superior

        ++volume;
    }

}

void televisores::diminueVolume(void){ // diminui o volume

     if(volume > 0){ // verifica se o volume já chegou em seu limite inferior

        --volume;
    }

}

void televisores::aumentaCanal(void){ // aumenta o canal

     if(canal < 50){ // verifica se o canal já chegou em seu limite superior

        ++canal;
    }

}

void televisores::diminueCanal(void){ // diminui o canal

     if(canal > 0){ // verifica se o canal ja chegou em seu limite inferior

        --canal;
    }

}

void televisores::alteraCanal(void){ // muda o canal

    int temp(0);

     cin >> temp;

     if(temp < 50 && temp > 0){ // verifica se o valor do canal é valido

         canal = temp;

     }

}

int televisores::getCanal(void){ // retorna o valor do canal

     return canal;

}

int televisores::getVolume(void){ // retorna o valor do volume

     return volume;

}


int main( void ){ //função main

    televisores tv1;
    int menu(0);

    do{

        cout << "SELECIONE A OPERACAO DESEJADA:" << endl; //menu de seleção da ação desejada

        cout << "1- Aumentar o volume" << endl;
        cout << "2- Diminuir o volume" << endl;
        cout << "3- Aumentar o Canal" << endl;
        cout << "4- Diminuir o canal" << endl;
        cout << "5- Staus do canal e do volume" << endl;
        cout << "6- Fechar o programa" << endl;

        cin >> menu;

        if(menu == 6){ // para o programa

            break;
        }
        
        switch (menu) // lista das ações que podem ser tomadas
        {
        case 1: // aumenta volume

            tv1.aumentaVolume();
            break;

        case 2: // diminui volume

            tv1.diminueVolume();
            break;

        case 3: // aumenta canal

            tv1.aumentaCanal();
            break;

        case 4: // diminui canal

            tv1.diminueCanal();
            break;

        case 5: //apresenta o status do canal e do volume

            cout << "Canal Atual: " << tv1.getCanal() << endl;
            cout << "Volume Atual: " << tv1.getVolume() << endl;
            break;
        
        default: // retorna break caso nenhum case seja ativado 

            break;
        }

    }while(true); // loop

    return 0;

}





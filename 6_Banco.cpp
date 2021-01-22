//criar dois objetos chamados conta1 e conta2, cujo a classe se chama banco.
//operaçoes posiveis saque, deposito, consulta;
//atributos: titular, numero da conta, e saldo.

#include<iostream>

using namespace std;

class Banco{

    private:

        string titular;
        int numeroConta;
        double saldoConta;
    
    public:

        Banco();

        void saque( double );
        void deposito( double );
        double saldo( void );

};

Banco::Banco(){

    cout << "Insira o nome da(o) titular: " << endl;
    getline( cin, titular );

    setbuf(stdin, NULL);

    cout << "Insira o numero da conta: " << endl;
    cin >> numeroConta;

     setbuf(stdin, NULL);

    saldoConta = 0;

    system("clear");

}

void Banco::saque( double valor){

    if(valor > saldoConta){

        ;

    }
    else
    {
        saldoConta -= valor;
    }
    

}

void Banco::deposito( double valor){

    saldoConta += valor;

}

double Banco::saldo(void){

    return saldoConta;

}

int main( void ){

    Banco conta1, conta2; 
    double valor(0);

    cout << "insira o valor do deposito: " << endl;

    cin >> valor;

    if(valor > 0){

        conta1.deposito(valor);

    }

    cout << "insira o valor do deposito: " << endl;

    cin >> valor;

    if(valor > 0){

        conta2.deposito(valor);

    }

    cout << "insira o valor do saque: " << endl;
    cin >> valor;

    conta1.saque(valor);

    cout << "insira o valor do saque: " << endl;
    cin >> valor;

    conta2.saque(valor);

    cout << "saldo: " << conta1.saldo() << endl;
    cout << "saldo: " << conta2.saldo() << endl;

    return 0;

}

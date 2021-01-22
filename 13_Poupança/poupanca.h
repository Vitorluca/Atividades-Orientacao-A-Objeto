#ifndef POUPANCA_H
#define POUPANCA_H

class ContaDePoupanca //cria a classe conta poupança
{
private: //menbro de dados privados, so podem ser acessados pelas funções menbros dessa classe

     
    long double saldoDaPoupanca; //armazena o valor atual da poupança
    static float taxaDeJurosAnual; // armazena a taxa de juros (só pode ser acessado nesse arquivo)

public: //funções menbros
    
    ContaDePoupanca(); //costrutor que inicializa as variaveis menbros
    void calculeRendimentoMensal( void ); //calcua o rendimento mensal da poupanca
    void setSaldo( long double); // altera o saldo da conta
    long double getSaldo( void ); // retorna o valor atual da conta 
    static void modifiqueTaxaDeJuros( float); // modifica a taxa de juros atual
    static float getJuros( void );
};

#endif
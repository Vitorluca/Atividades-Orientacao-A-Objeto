#include "poupanca.h" //inclui o arquivo que contêm o prototipo da classe

ContaDePoupanca::ContaDePoupanca() //construtor da classe Poupanca
{
    saldoDaPoupanca = 0; // inicializa o saldo da poupanca em 0
}

void ContaDePoupanca::calculeRendimentoMensal(void) // calcula o rendimento da poupança
{

   saldoDaPoupanca += ( taxaDeJurosAnual * saldoDaPoupanca )/ 12; //saldo recebe o rendimento da poupança

}

void ContaDePoupanca::setSaldo( long double saldoInicial) //função altera o valor do saldo
{

    saldoDaPoupanca = saldoInicial; // saldo recebe o valor recebido na main
}

long double ContaDePoupanca::getSaldo( void ) // função retorna o valor do saldo atual
{

    return saldoDaPoupanca; //retorna o saldo atual
}

void ContaDePoupanca::modifiqueTaxaDeJuros( float juros) //função altera a taxa de juros atual
{

    taxaDeJurosAnual = juros; // taxaDeJurosAnual recebe valor recebido da main

}

float ContaDePoupanca::getJuros( void){

    return taxaDeJurosAnual;

}


float ContaDePoupanca::taxaDeJurosAnual = 0; //variavel isatic da classe e incializada com 0


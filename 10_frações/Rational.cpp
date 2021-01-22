//arquivo possui as funções menbros da classe Rational
#include "Rational.h" // inclui a estrutura da classe neste arquivo

Rational::Rational(){ // costrutor que inicializa os valores quando so objetos são instanciados

    numerador = 0; // inicializa o numerador com 0
    denominador = 0; // inicializa o denominador em 0

}

//multiplica dois objetos e armazena nos atributos de um terceiro objeto
void Rational::F_multiplica(Rational fracao_1, Rational fracao_2){

    //armazena o produto dos numeradores no numerador de um terceiro objeto
    numerador = fracao_1.numerador * fracao_2.numerador;
    denominador = fracao_1.denominador * fracao_2.numerador;//armazena o produto denominadores
    
}

//divide dois objeos e armazena em um terceiro objeto
void Rational::F_dividir(Rational fracao_1, Rational fracao_2){

    // faz o produto do numerador(fração 1) pelo denominador(fração 2). Armazena em outro objeto
    numerador = fracao_1.numerador * fracao_2.denominador;

    // faz o produto do numerador(fração 2) pelo denominador(fração 1). Armazena em outro objeto
    denominador = fracao_1.denominador * fracao_2.numerador;
    
}

void Rational::setNumerador( int num ){ // ALTERA O VALOR ATUAL DO NUMERADOR

    //numerador recebe um valor vindo da main
   numerador = num;  
    
}

void Rational::setDenominador( int den ){ // ALTERA O VALOR ATUAL DO denominador

    //denominador recebe um valor vindo da main
   denominador = den;
    
}

int Rational::getNumerador( void ){ // retorna o valor atual do numerador

    //retorna da função
    return numerador;  
    
}

int Rational::getDenominador( void ){ // retorna o valor atual do denominador

    //retorna da função
    return denominador;  
    
}
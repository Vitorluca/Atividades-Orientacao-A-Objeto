//este arquivo possui apenas a estrutura da classe
// (:
#ifndef RATIONAL_H
#define RATIONAL_H

class Rational { //classe rational
private:
    
    int numerador; // variavel menbro numerador
    int denominador; // variavel menbro denominador
    
public:

    Rational(); //contrtor responsavel por definir um valor defaut 
    void F_multiplica( Rational, Rational); // função menbro que multiplica dos frações(dois objetos)
    void F_dividir( Rational, Rational); // função menbro que divide dos frações(dois objetos)
    
    void setNumerador(int); //insere um valor no numerador;
    void setDenominador(int);// insere um valor no denominador

    int getNumerador( void ); // mostra o valor atual do numerador
    int getDenominador( void ); // mostra o valor atual do denominador

};

#endif
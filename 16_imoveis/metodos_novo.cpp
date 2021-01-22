#define ADICIONAL 1.2

#include "novo.h"

novo::novo( string endereco, long double preco , float adicional ):imovel( endereco, preco ){

    this -> endereco = endereco;
    this -> adicional = adicional;
    this -> preco = (preco * adicional);

}

void novo::setAdicional( float Adicional){

    adicional = Adicional;

}

float novo::getAdicional( void ){

    return adicional;

}




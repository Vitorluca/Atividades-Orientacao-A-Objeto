#include "velho.h"

velho::velho( string endereco, long double preco, float desconto ):imovel( endereco, preco ){

    //this -> endereco = endereco;
    //this -> desconto = desconto;
    //this -> preco = (preco * desconto);

}

void velho::setDesconto( float Desconto){

    desconto = Desconto;

}

float velho::getDesconto( void ){

    return desconto;

}
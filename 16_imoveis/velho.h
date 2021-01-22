#ifndef VELHO_H
#define VELHO_H

#include "imovel.h"
//#include "metodos_imovel.cpp"

class velho:public imovel{
private:

    float desconto;

public:

    velho( string = " ", long double = 0, float = 0.9 );

    void setDesconto( float );
    float getDesconto( void );

};

#endif
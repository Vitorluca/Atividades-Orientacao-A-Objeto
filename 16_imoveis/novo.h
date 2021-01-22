#ifndef NOVO_H
#define NOVO_H

#include "imovel.h"
//#include "metodos_imovel.cpp"

class novo: public imovel{
private:

    float adicional;

public:

    novo( string , long double , float = 1.1 );

    void setAdicional( float );
    float getAdicional( void );

};

#endif
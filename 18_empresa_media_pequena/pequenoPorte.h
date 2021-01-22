// prototipo da classe derivada pequeno porte

#ifndef PEQUENOPORTE_H// evita erros de redefinição de arquivos
#define PEQUENOPORTE_H // define o arquivo

#include "empresa.h" //inclui o arquivo empresa.h ao arquivo atual

class pequenoPorte : public empresa { // definição da classe derivada pequeno Porte

private: //define o tipo de acesso dos metodos ou atributos

    bool SIMPLES; //define se uma empresa faz parte ou não do simples
    long double valorImpostoSIMPLES; //valor pago pelas empresas de pequeno porte

public:
    
    //costrutor da classe derivada pequeno Porte inicializção defaut
    pequenoPorte(double = 0, string = "não definido", bool = false, float = 17.0,
                                long double = 0, long double = 0, bool = true );

    void setSIMPLES( bool ); //altera se a empresa pertence ou não ao SIMPLES
    void imprimeSIMPLES( void ); //IMPRIME SE A EMPRESA É DO SIMPLES OU NÃO
    void calculaImposto( void );

};

#endif //indica o fim do arquivo
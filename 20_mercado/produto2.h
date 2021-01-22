// protottipo da classe derivada produto 1

#ifndef PRODUTO2_H // evita que o arquivo seja REDEFINIDO
#define PRODUTO2_H // define o arquivo produto

#include "produto.h" // inclui o arquivo produto.h 

class produto2 : public produto{ //nome da classe derivada e sua classe base

private: //define o tipo de acesso dos atributos no caso é privado


    long int LimiteEstoque; // defini um  limite maximo de estoque para esse produto
    double novoPreco; //preco com o desconto caso o limite de estoque tenha sido extrapolado

public: // //define o tipo de acesso dos atributos no caso é publico

    produto2(long int = 0, double = 0, long int = 0, string = "indefinido" ); //costrutor que inicializa os atributos
    void desconto( void ); //altera o preço do produto caso o estoque esteja acima do limite

    void imprime( void ); // imprime os atributos do classe base e derivada

};

#endif // indica o fim do arquivo
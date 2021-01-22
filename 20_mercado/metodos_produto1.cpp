// metodos da classe derivada produto1

#define DESCONTO 0.80 // subistitui a palavra DESCONTO por 0.80 quando o porgrama for compilado

#include "produto1.h" // adiciona o arquivo produto1.h

//costrutor da classe derivada produto1
produto1::produto1(long int LimiteEstoque,  double preco, long int estoque, string nome  ): 
                                                            produto( preco, estoque, nome ){

    novoPreco = getPreco(); // novo preço recebe o preço sem desconto do produto
    this -> LimiteEstoque = LimiteEstoque; // atribui um valor a variavel-menbro limiteEstoque

    desconto( ); // chama a função menbro da classe

}

void produto1::desconto( void ){ // metodo desconto

    novoPreco = getPreco( );// novo preço recebe o preço sem desconto

    // testa uma condição se verdadeira atribui um novo valor ao novo preco
    novoPreco = ( getEstoque() > LimiteEstoque ) ? (novoPreco * DESCONTO) : getPreco( );

    //cout << " TESTE!: " << novoPreco << endl;

}

void produto1::imprime( void ){ // imprime alguns do metodos sa classe

    cout << "nome: " << getNome() << endl; //imprime o nome 
    cout << "Estoque: " << getEstoque() << endl;  // imprime o estoque
    cout << "preco: " << novoPreco << endl; // imprime o preço

}
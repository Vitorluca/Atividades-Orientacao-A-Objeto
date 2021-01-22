// metodos da classe derivada produto1

#define DESCONTO 0.95 // subistitui a palavra DESCONTO por 0.95 quando o porgrama for compilado

#include "produto2.h" // adiciona o arquivo produto1.h

//costrutor da classe derivada produto2
produto2::produto2(long int LimiteEstoque,  double preco, long int estoque, string nome  ): 
                                                            produto( preco, estoque, nome ){

    novoPreco = getPreco(); // novo preço recebe o preço sem desconto do produto
    this -> LimiteEstoque = LimiteEstoque; // atribui um valor a variavel-menbro limiteEstoque

    desconto( ); // chama a função menbro da classe

}

void produto2::desconto( void ){ // metodo desconto

    novoPreco = getPreco( ); // novo preço recebe o preço sem desconto

    // testa uma condição, se verdadeira atribui um novo valor ao novoPreco
    novoPreco = ( getEstoque() > LimiteEstoque ) ? (novoPreco * DESCONTO) : getPreco( );

    //cout << " TESTE!: " << novoPreco << endl;

}

void produto2::imprime( void ){// imprime alguns do metodos sa classe

    cout << "nome: " << getNome() << endl; //imprime o nome 
    cout << "Estoque: " << getEstoque() << endl; // imprime o estoque
    cout << "preco: " << novoPreco << endl; // imprime o preço

}
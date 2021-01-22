// metodos da classe base produtos

#include "produto.h" //inclui o rquivo produto.h

produto::produto( double preco, long int estoque, string nome ): // costrutor inicializa os atributos
                preco( preco ), estoque( estoque ), nome( nome ){ //varaveis da main são atribuidas



}

void produto::setPreco( double preco ){ // altera o vaor do atributo preco

    this -> preco = (preco >= 0 ) ? preco : 0; //atribui o novo valor ao atributo nome

}

void produto::setEstoque( long int estoque ){ // altera o vaor do atributo estoque

    this -> estoque = (estoque >= 0 ) ? estoque : 0; //atribui o novo valor ao atributo estoque

}

void produto::setNome( string nome ){ // altera o valor do atributo nome

    this -> nome = nome; //atribui o novo valor ao atributo nome


}

double produto::getPreco( void ){ //apresenta o valor contido no atributo

    return preco; // retorna o atributo preco

}

long int produto::getEstoque( void ){ //apresenta o valor contido no atributo

    return estoque; // retorna o atributo estoque

}

string produto::getNome( void ){ //apresenta o valor contido no atributo

    return nome; // retorna o atributo nome

}
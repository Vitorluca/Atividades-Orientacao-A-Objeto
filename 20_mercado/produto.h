// prototipo da classe base produto

#ifndef PRODUTO_H // evita que o arquivo seja REDEFINIDO
#define PRODUTO_H // define o arquivo produto

class produto{ //nome da classe produto

private: //define o tipo de acesso dos atributos no caso é privado

    double preco; //preço do produto
    long int estoque; //quantidade de produtos em estoque
    string nome; // nome do produto

public: //define o tipo de acesso dos atributos no caso é publico

    produto( double = 0, long int = 0, string = "indefinido" ); //costrutor que inicializa os atributos

    void setPreco( double ); //alterar o preço do produto
    void setEstoque( long int ); //altera o estoque do produto
    void setNome( string ); //altera o nome do produto

protected:

    double getPreco( void ); // retorna o preço do produto
    long int getEstoque( void ); // retorna o estoque atual do produto
    string getNome( void );// retorna o nome do produto

};

#endif // indica o fim do arquivo
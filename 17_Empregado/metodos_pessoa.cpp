// Metodos da classe pessoa

#include "pessoa.h" //Inclusão da definção da classe 

pessoa::pessoa( string nome, long int CPF ){ //contrutor da classe pessoa

    this -> nome = nome;
    this -> CPF = CPF;

}

void pessoa::setNome( string nome){ //metodo recebe uma string

   this -> nome = nome; //atribui a string recebida ao atributo nome

}

void pessoa::setCPF( long int CPF ){ //metodo recebe um inteiro

    this -> CPF = CPF; // inteiro é atribuido ao atributo CPF

}

void pessoa::imprimeNomeCPF( void ){ //metodo de impressão

    cout << "nome: " << nome << "\n" << "CPF: " << CPF << endl;//imprime da tela os atributos da classe

}



//metodos da classe empresa

#include "empresa.h"
//#include "funcionarios.h"
//#include <cstring> //deletar linha 

empresa::empresa(int TamMAX , long int CNPJ,string NOME , int tam){

    this -> TamMAX = TamMAX > 0 ? TamMAX : 0;

	Prt_funcio = new funcionarios[ TamMAX ];
    this -> tam = 0;

}

void empresa::setNOME( string NOME ){

    this -> NOME = NOME;

}

string empresa::getNOME( void ){

    return NOME;

}

void empresa::setCNPJ( long int CNPJ ){

    this -> CNPJ = CNPJ;

}

long int empresa::getCNPJ( void ){

    return CNPJ;

}

void empresa::aumento( string departamento ){

    int contador(0);
    //string depar;

    for( contador = 0; contador < tam ; ++contador ){

         cout << "funciona?" << endl;

        if( Prt_funcio[contador].getDepartamento()  == departamento ){

            Prt_funcio[contador].setSalario(  Prt_funcio[contador].getSalario() * 1.1  );

        }

    }

    cout << "Deu certo!!!!" << endl;

}

void empresa::setFuncionario( funcionarios elemento){

    if(tam < TamMAX){

        Prt_funcio[ tam ] = elemento;
        ++tam;

    }

}

empresa::~empresa(){

    delete [] Prt_funcio;

}
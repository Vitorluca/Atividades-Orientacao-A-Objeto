#ifndef EMPRESA_H
#define EMPRESA_H
//#include<string>
//#include "funcionarios.h"

using namespace std;

class empresa
{
private:

    string NOME;
    long int CNPJ;
    int TamMAX;
    funcionarios *Prt_funcio;
    int tam;
    
public:
    empresa(int = 0, long int = 0, string = " " , int = 0);

    void setNOME( string NOME );
    string getNOME( void );

    void setCNPJ(long  int NOME );
    long int getCNPJ( void );

    void aumento( string );

    void setFuncionario( funcionarios );


    ~empresa();
};

#endif

//prorotipo da classe base empresa

#ifndef EMPRESA_H
#define EMPRESA_H

class empresa //CLASSE BASE EMPRESA
{

private: //DEFINE QUE OS ATRIBUTOS SÃO ACESADOS APENAS PELOS METODOS DA CLASSE

    double CGC; // CGC da empresa
    string nome; // nome da empresa 
    bool porte; // porte da empresa
    float impostoBase; // imposto base sobre as empresas
    long double faturamento; // faturameneto da empresa

protected:

    long double valorImposto; //valor  do faturamnto que ira para o imposto

public:

    empresa(double = 0, string = "não definido", bool = true, float = 17.0,
                                        long double = 0, long double = 0 ); //contrutor da classe base

    void setNome( string ); // altera o nome da empresa
    void setPorte( bool ); // altera o porte da empresa
    void setCGC( double ); // altera o numero CGC 
    void setImposto( double );// altera o imposto base
    void setFaturamento( long double ); // altera o faturamento anual da empresa
    void calculaImposto( void );
    void imprimeAtributos( void ); //imprime os atributos da classe

};

#endif 
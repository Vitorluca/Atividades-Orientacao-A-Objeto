#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H

//#include<string>

using namespace std;

class funcionarios
{
private:

    string nome;
    double salario;
    string admissao;
    string departamento;

public:
    funcionarios( string = " indefinido ",double = 0, string = " indefinido ", string = " indefinido " );
    
    void setNome( string );
    string getNome( void );

    double getSalario( void );
    void setSalario( double );

    string getAdmissao( void );
    void setAdmissao( string );

    string getDepartamento(void);
    void setDepartamento( string );


};

#endif

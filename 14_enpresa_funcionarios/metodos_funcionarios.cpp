#include "funcionarios.h"
//#include <string>
//using namespace std;

funcionarios::funcionarios( string nome, double salario, string admissao , string departamento ){

    

}
    
void funcionarios::setNome( string nome){

    this -> nome = nome;

}
string funcionarios::getNome( void ){

    return nome;
}

double funcionarios::getSalario( void ){

    return salario;

}
void funcionarios::setSalario( double salario){

    this -> salario = salario;

}

string funcionarios::getAdmissao( void ){

    return admissao;

}
void funcionarios::setAdmissao( string admissao){

    this -> admissao = admissao;

}

string funcionarios::getDepartamento(void){

    return departamento;

}
void funcionarios::setDepartamento( string departamento){

    this -> departamento = departamento;

}
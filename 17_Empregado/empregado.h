// prototipo da classe empregado

#ifndef EMPREGADO_H /* diretiva de preprocessamento que evita que ocorra erros de redefinição*/
#define EMPREGADO_H //definição da classe pessoa

#include "pessoa.h" // inclui o arquivo pessoa que possui a classe pessoa e da acesso atributo e metodos 

class empregado:public pessoa{ //momeclatura da classe e sua criação

private: //dentro desse escopo são acessados apenas por metodos da classe derivada 

    int numeroSecao; // armazena o numero de seção do empregado
    long double salarioBase; // salario base do empregado
    float IR; // imposto de renda sobre salario 
    long double salarioLiquido; // armazena o salario liquido do empregado

public: //define que os metodos dentro desse escopo são acesiveis em qualquer função

    empregado(string,long int, int = 0, long double = 0, float = 0 ); //construtor da classe empregado
    void setNumeroSecao( int ); //altera o numero da seção do empregado
    void setSalarioBase( long double ); //altera o salario base do empregado
    void setIR( float ); // altera o imposto de renda sobre o salario 
    void calcularSalario( void ); // calcula o salario liquido do empregado
    void imprimeLiquidoSecao( void ); //imprime o salario liquido e o numero secao

};

#endif //indica o fim do da classe

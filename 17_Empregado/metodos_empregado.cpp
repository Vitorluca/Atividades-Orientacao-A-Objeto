// Metodos da classe empregado

 //inclui o arquivo empregado.h
#include "empregado.h"

//construtor da classe empregado que chama por heranca construtor pessoa
empregado::empregado(string nome, long int CPF, int numeroSecao, long double salarioBase, float IR )
                                                                                :pessoa( nome, CPF ){

    this -> numeroSecao = numeroSecao; // atributo numero seção recebe uma valor inicial
    this -> salarioBase = salarioBase; // atributo salario base recebe uma valor inicial
    this -> IR = IR;

}

void empregado::setNumeroSecao( int numeroSecao){ //metodo que altera o numero da seção

    this -> numeroSecao = numeroSecao; // atributo numero seção recebe um valor novo

}

void empregado::setSalarioBase( long double salarioBase ){ //metodo que alterar salario base

    //salario base recebe valor se condição verdadeira
    this -> salarioBase = ( salarioBase >= 0 ) ? salarioBase : 0;

}

void empregado::setIR( float IR ){ //metodo que alterar o imposto de renda

   this -> IR = ( IR >= 0 && IR <= 100 ) ? IR : 0;//salario base recebe valor se condição verdadeira

}

void empregado::calcularSalario( void ){ // metodo que calcula o salario liquido do empregado

    //atributo salario liquido recebe o resultado da operação
    salarioLiquido = salarioBase - ( salarioBase * (IR / 100) ); 

}

void empregado::imprimeLiquidoSecao( void ){ //imprime algums  dos atributos da classe empregado 

    cout << "Salario Liquido: " << salarioLiquido << "\n" << "numero da seção: " 
    << numeroSecao << endl;//imprime da tela os atributos da classe

    imprimeNomeCPF( ); //chama a função da classe base que emprime CPF e nome

}
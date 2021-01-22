//metodos da classe derivada pequeno porte

#include "pequenoPorte.h" //inclui o arquivo que cotem o prototipo da classe

#define POSSUI 0.30
#define NAOPOSSUI 0.50

//costrutor da classe medio Porte
pequenoPorte::pequenoPorte(double CGC, string nome, bool porte, float impostoBase,
 long double faturamento, long double valorImposto , bool SIMPLES):

// valores são passado para classe base
empresa( CGC, nome, porte, impostoBase, faturamento, valorImposto ){

this -> SIMPLES = SIMPLES;// variavel recebida na main é atribuida ao atributo

}

void pequenoPorte::setSIMPLES( bool SIMPLES){ //função altera a situação de cadastro da empresexita(SIMPLES)

    this -> SIMPLES = SIMPLES;// variavel recebida na main é atribuida ao atributo

    calculaImposto( ); //chama a função calcula imposto

}

void pequenoPorte::calculaImposto( void ){ // calcula o imposot de acordo com a sitaução da empresa

    if ( SIMPLES == true ){ //se estiver cadastrado no simples

        valorImpostoSIMPLES = valorImposto * POSSUI; //valor calculado com base em uma aliquota
    }
    else //CASO O IF NÃO SEJA ATIVADO
    {

       valorImpostoSIMPLES  = valorImposto * NAOPOSSUI;//valor calculado com base em outra aliquota

    }
    

}

void pequenoPorte::imprimeSIMPLES( void ){ //função imprime todos os metodos da classe

    cout << "cadrastado no SIMPLES: " << ( ( SIMPLES == true ) ? "SIM" : "NAO" ) << endl;
    cout << "valor pago por pequena empresa: " << valorImpostoSIMPLES << endl;
    
    empresa::imprimeAtributos( );

}
// metodos da classe base empresa

#include "empresa.h" //inclui o arquivo que cotem o prototipo da classe

//costrutor da classe empresa e os atributos esperados para o mesmo
empresa::empresa( double CGC, string nome, bool porte, float impostoBase, long double faturamento,
                                                                         long double valorImposto ){

    this -> CGC = CGC; //valo recebido na main e atribuido ao atributo CGC
    this -> nome = nome; // string recebida na main é atribuida ao atributo
    this -> porte = porte; // variavel boliana é atribuida ao atributo porte
    this -> impostoBase = impostoBase; // variavel recebida na main é atribuida ao atributo 
    this -> faturamento = faturamento; // faturamento reebido na main é atribuido ao atributo
}

void empresa::setCGC( double CGC){ // metodo que altera o numero CGC da empresa

    this -> CGC = ( CGC > 0 ) ? CGC : 0; // testa se o valor recebido é valido e atribui ao atributo
}

void empresa::setPorte( bool porte ){ // metodo que altera o porte da da empresa

    this -> porte = porte; // testa se o valor recebido é valido e atribui ao atributo
}

void empresa::setNome( string nome ){ // metodo que altera o nome da da empresa

    this -> nome = nome; //string recebida é atribuida ao atributo
}

void empresa::setImposto( double impostoBase ){ //altera o imposto base da empresa 

    this -> impostoBase = ( impostoBase > 0 ) ? impostoBase : 0;// testa se o valor recebido é valido
}

void empresa::setFaturamento( long double faturamento ){ //altera o faturamento anual

    this -> faturamento = ( faturamento > 0 ) ? faturamento : 0; //testa se é valido

    calculaImposto(); //chama a função calcula imposto
}

void empresa::calculaImposto( void ){ // função calcula o valor do faturamento que ira para imposto

    valorImposto = faturamento * ( impostoBase / 100 ); //executa o calculo do valor do imposto
}

void empresa::imprimeAtributos( void ){ //iprime alguns dos atributos para o ususario

    cout << " Valor do imposto: " << valorImposto << endl; //imrpime valor do imposto
    cout << "Nome: " << nome << endl; // imprime o nome da empresa
    cout << "CGC: " << CGC << endl; //imrpime o numero CGC da empresasss

}

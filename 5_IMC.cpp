//criar uma classe chamada pessoal, criar um objeto cujo a classe é pessoa
//calcular IMC, categoria, funções menbaro que retornem os atributos do objeto

#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

class pessoa{

    private:

        string nome;
        string sexo;
        int idade;
        float altura;
        float peso;
        
    
    public:

        //construtor(inicializa as variaveis)
        pessoa();

        string getNome( void );
        int getIdade( void );
        float getAltura( void );
        float getPeso( void );
        string getsexo( void );

        float  IMC( void );
        void cateIMC( void );

};

pessoa::pessoa(){

    cout << "Insira o nome: " << endl;
    getline(cin, nome);

    cout << "Insira a idade: " << endl;
    cin >> idade;

    cout << "Insira a altura: " << endl;
    cin >> altura;

    cout << "Insira o peso: " << endl;
    cin >> peso;

    setbuf(stdin, NULL);

    cout << "Insira o sexo: " << endl;
    getline(cin, sexo);

}

string pessoa::getNome( void ){

    return nome;

}

int pessoa::getIdade( void ){

    return idade;

}

float pessoa::getAltura( void ){

    return altura;

}

float pessoa::getPeso( void ){

    return peso;

}

string pessoa::getsexo( void ){

    return sexo;

}

float pessoa::IMC( void ){

    return peso / pow( altura, 2 );

}

void pessoa::cateIMC(){

    int imc(0);

    imc = IMC();

    if( imc <= 18.5 ){

        cout << "Abaixo do peso normal" << endl;
    }

    if( imc > 18.5 && imc <= 25.0 ){

        cout << "Peso normal" << endl;
    }

    if( imc > 25.0 && imc <= 30.0){

        cout << "Acima do peso normal" << endl;
    }

    if( imc > 30.0 ){

        cout << "Obesidade" << endl;
    }
    
}

int main( void ){

    pessoa pessoa1;

    system("clear");
    
    cout << "Nome: " << pessoa1.getNome() << endl;
    cout << "Idade: " << pessoa1.getIdade() << endl;
    cout << "Altura: " << pessoa1.getAltura() << endl;
    cout << "Peso: " << pessoa1.getPeso() << endl;
    cout << "Sexo: " << pessoa1.getsexo() << endl;

    pessoa1.cateIMC();

    return 0;

}
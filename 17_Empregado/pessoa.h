// prototipo da classe pessoa

//#include<string>

using namespace std;

#ifndef PESSOA_H /* diretiva de preprocessamento que evita que ocorra erros de redefinição*/
#define PESSOA_H //definição da classe pessoa

class pessoa { //momeclatura da classe e sua criação

    // como não foi explicitado os atributos são PRIVATE!!!!!!

    private: //dentro desse escopo são acessados apenas por metodos da classe base

      string nome;// variavel membro nome

      long int CPF; // variavel membro CPF

   public: //define que os metodos são execiveis por outras funções que não pertemcem a classe

       pessoa( string = " ", long int = 0 ); // construtor da classe pessoa

       void setNome( string ); //função menbro que altera o nome

       void setCPF( long int ); //função menbro que altera o CPF

       void imprimeNomeCPF ( void ); // Imprime os valores das variaveis membro

   };

#endif //indica o fim da classe
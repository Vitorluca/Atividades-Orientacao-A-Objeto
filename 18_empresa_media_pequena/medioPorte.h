//prototipo da classe medio Porte

#ifndef MEDIOPORTE_H  // evita erros de redefinição de arquivos
#define MEDIOPORTE_H // define o arquivo

#include "empresa.h" //inclui o arquivo empresa.h ao arquivo atual

class medioPorte : public empresa{

private: //define o tipo de acesso dos metodos ou atributos

    // essa classe não tera atributos pois todos já estão definidos na classe base e 
    // não ha nehuma especificide para que seja necesario atributos especificos dessa classe.

    //ps.: essa classe só foi criada de acordo com as estruções do professor que havia mencionado
    //que existiria uma classe base empresa e duas clases derivadas(pequeno e medio porte),
    //caso contrario essa classe não seria criada.

public: //define o tipo de acesso dos metodos ou atributos

    medioPorte(double = 0, string = "não definido", bool = true, float = 17.0,
                                    long double = 0, long double = 0 ); //costrutor da classe medio Porte

};

#endif //indica o fim do arquivo
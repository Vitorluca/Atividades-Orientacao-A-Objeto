#include<iostream>
#include<locale>
#include<cstring>

using namespace std;

#include "metodos_funcionarios.cpp"
#include "metodos_empresa.cpp"

void f_modificaFuncionario( funcionarios &funcionario );

int main( void ){

    setlocale(LC_ALL, "portuguese");

    empresa TIM(50);
    funcionarios funcionario;
    int menu(0);
    string departamento;

    do{

        cout << "digite a opção desejada" << endl;
        
        cout << "1- adicionar funcionario" << endl;
        cout << "2- Dar aumento a funcionaris de um departamento" <<  endl;
        cout << "3 - fechar programa" << endl;

        cin >> menu;
        system("clear");

        

        switch(menu){

            case 1:

                f_modificaFuncionario( funcionario );
                TIM.setFuncionario( funcionario );
                break;
            case 2:
                cout << "Insira o departamento: " << endl;
                cin >> departamento;

                TIM.aumento( departamento );
                break;
            case 3:
                break;
            
            default:

                break;

        }


    }while(menu != 3);



    return 0;


}

void f_modificaFuncionario( funcionarios &funcionario ){

    string dataAdmissao = " indefinido ", nome = " indefinido ", departamento = " indefinido ";
    long double salario(0);

    setbuf(stdin, NULL);

    cout << "DATA DE ADMISSÃO(POR FAVOR INSIRA A DATA COM ESSE FORMATO 00/00/0000): "<< endl;
    getline(cin, dataAdmissao);
    funcionario.setAdmissao( dataAdmissao );
    setbuf(stdin, NULL);
    //setbuf(stdout, NULL );

    system("clear");

    //cout << "\n" << endl;

    cout << "NOME: "<< endl;
    getline(cin, nome);
    funcionario.setNome( nome );
    setbuf(stdin, NULL);
    //setbuf(stdout, NULL );

    system("clear");

    cout << "SALARIO: "<< endl;
    cin >> salario;
    funcionario.setSalario( salario );
    setbuf(stdin, NULL);
    //setbuf(stdout, NULL );

    system("clear");

    cout << "DEPARTAMENTO: "<< endl;
    getline(cin, departamento);
    funcionario.setDepartamento( departamento );
    setbuf(stdin, NULL);
    //setbuf(stdout, NULL );

    system("clear");
        

}
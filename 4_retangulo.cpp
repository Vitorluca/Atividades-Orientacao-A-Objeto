//RECEBE UMA RETANGULO E DETERMINA SE OS PONTOS ESTÃO NO PRIMEIRO QUADRANTE, AREA, COMPRIMENTO
//LARGURA E SE É QUADRADO

#include<iostream>

using namespace std;

class Retangulo{

    int pix,piy,psx, psy;

    bool checar(int,int,int,int);

public:

    void setValores(int, int, int, int);

    int comprimento();

    int largura();

    int perimetro();

    int area();

    bool ehquadrado(); 

};

void Retangulo::setValores( int a, int b, int a2, int b2 ){

    pix = a;
    piy = b;
    psx = a2;
    psy = b2;

    if ( checar(pix, piy, psx, psy) == true )
    {
        cout << "SIM" << endl;
    }
    else
    {
        cout << "NAO" << endl;
    }

}

bool Retangulo::checar(int a, int b, int a2, int b2){

    if(a < 15 || b < 15 || a2 < 15 || b2 < 15){

        if( a > 0 && b > 0 && a2 > 0 && b2 > 0){

            return true;

        }
        else
        {
            return false;
        }
        
    }
    else
    {
        return false;
    }

}

int Retangulo::comprimento( void ){

    int temp1(0), temp2(0);

    if( pix > psx && pix != psx){

        temp1 = pix - psx;

    }
    if(psx > pix && pix != psx){

        temp1 = psx - pix;
    }

    if(pix == psx){

        temp1 = pix;
    }

    if( piy > psy && piy != psy){
        
        temp2 = piy - psy;
    }

    if(psy > piy && pix != psx){
        
        temp2 = psy - piy;
    }

    if(piy == psy){

        temp2 = piy;
    }

    if( temp1 > temp2 ){

        return temp1;

    }
    else
    {
        return temp2;
    }

}

int Retangulo::largura( void ){

    int temp1(0), temp2(0);

    if( pix > psx && pix != psx){

        temp1 = pix - psx;

    }
    if(psx > pix && pix != psx){

        temp1 = psx - pix;
    }

    if(pix == psx){

        temp1 = pix;
    }

    if( piy > psy && piy != psy){
        
        temp2 = piy - psy;
    }

    if(psy > piy && pix != psx){
        
        temp2 = psy - piy;
    }

    if(piy == psy){

        temp2 = piy;
    }

    if( temp1 > temp2 ){

        return temp2;

    }
    else
    {
        return temp1;
    }

}

int Retangulo::perimetro(){

    return ( 2 * largura()) + ( 2 * comprimento());

}

int Retangulo::area(){

    return largura() * comprimento();

}

bool Retangulo::ehquadrado(){

    if( largura() == comprimento() ){

        return true;

    }
    else
    {
        return false;
    }
    
}

int main( void ){

    int x1(0), y1(0), x2(0), y2(0);
    Retangulo ret1;

    cout << "Insira os Valores: " << endl;
    cin >> x1 >> y1 >> x2 >> y2;

    ret1.setValores( x1, y1, x2, y2 );

    cout << "Comprimento: " << ret1.comprimento() << endl;
    cout << "Largura: " << ret1.largura() << endl;
    cout << "Perimetro: " << ret1.perimetro() << endl;
    cout << "Area: " << ret1.area() << endl;

    cout << "E um quadrado?" << endl;
    
    if ( ret1.ehquadrado() == true )
    {
        cout << "SIM" << endl;
    }
    else
    {
        cout << "NAO" << endl;
    }

    return 0;

}






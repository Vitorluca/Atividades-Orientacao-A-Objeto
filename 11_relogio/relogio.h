// estrutura da classe 

#ifndef RELOGIO_H
#define RELOGIO_H

class relogio
{
private:

    int hora;
    int minuto;
    int segundo;

public:

    //relogio(/* args */);
    void setHora(int, int, int);
    void getHora( int *, int *, int *);
    void passatempo( void );

};

#endif

//arquivo com as funções menbros da classe

#include "relogio.h"

void relogio::setHora( int h, int m, int s ){ // h = hora   m = minuto   s = segundo

    hora = h;
    minuto = m;
    segundo = s;

} 

void relogio::getHora( int *Pont_h, int *Pont_m, int *pont_s ){ // h = hora   m = minuto   s = segundo

    Pont_h = &hora;
    Pont_m = &minuto;
    pont_s = &segundo;

}

void relogio::passatempo( void ){ //passa os segundo sno relogio

    if(segundo < 60){

        ++segundo;

    }
    else
    {
        segundo = 0;

        if (minuto < 60)
        {
            ++minuto;
        }
        else
        {
            minuto = 0;

            if (hora < 24)
            {
                ++hora;
            }
            else
            {
                hora = 0;
                minuto = 0;
                segundo = 0;
            }
            
            
        }
        
        
    }
    
    

}
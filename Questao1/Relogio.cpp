#include "iostream"
#include "Relogio.h"

using namespace std;

Relogio::Relogio()
{
    setHorario(0,0,0);
}

void Relogio::setHora(int h)
{
    if (h>0 && h<24)
        hora = h;
    else
        hora = 0;
}
void Relogio::setMinuto(int m)
{
    if (m>0 && m<60)
        minuto = m;
    else
        minuto = 0;
}
void Relogio::setSegundo(int s)
{
    if (s>0 && s<60)
        segundo = s;
    else
        segundo = 0;
}
void Relogio::setHorario(int h,int m,int s)
{
    setHora(h);
    setMinuto(m);
    setSegundo(s);
}

int Relogio::getHora(void)
{
    return hora;
}
int Relogio::getMinuto(void)
{
    return minuto;
}
int Relogio::getSegundo(void)
{
    return segundo;
}

void Relogio::AvancarHorario()
{
    segundo++;

    if(segundo >= 60)
    {
        segundo = 0;
        minuto++;
    }
    if(minuto >= 60)
    {
        minuto = 0;
        hora++;
    }
    if(hora == 24)
        hora = 0    ;

    cout << "" <<hora<< ":"<< minuto<< ""<< ":"<< segundo << endl;
}



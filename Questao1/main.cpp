#include "Relogio.h"
#include <iostream>

using namespace std;

int main()
{
    Relogio relogio1;
    int aux;

    cout << "Informe a hora: ";
    cin >> aux;
    relogio1.setHora(aux);

    cout << "informe o minuto: ";
    cin >> aux;
    relogio1.setMinuto(aux);

    cout << "Informe o segundo: ";
    cin >> aux;
    relogio1.setSegundo(aux);

    cout << endl << "" << relogio1.getHora()<< ":"<< relogio1.getMinuto()<< ""<< ":"<< relogio1.getSegundo()<< endl;
    cout << endl << "Avancando um segundo... " << endl;
    relogio1.AvancarHorario();

    return 0;
}

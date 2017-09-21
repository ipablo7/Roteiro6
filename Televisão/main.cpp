#include <iostream>
#include "Televisao.h"
#include "TelevisaoTeste.h"

using namespace std;

void exibeMenu(){
    cout << "**-----MENU-----**" << endl;
    cout << "1 - Inserir canal e volume" << endl <<
            "2 - Aumentar volume" << endl <<
            "3 - Diminuir volume" << endl <<
            "4 - Mudar canal" << endl <<
            "5 - Exibir canal e volume" << endl <<
            "0 - Desligar" << endl << endl <<
            "Escolha uma das opcoes acima: ";
}

int main(void){
    TelevisaoTeste tt1;
    tt1.i = 0;
    Televisao tv1;
    int op, c, v;

    while(1){
        exibeMenu();
        cin >> op;
        switch(op){
            case 1:
                cout << "Insira o canal: ";
                cin >> c;
                tv1.setCanal(c);
                cout << "Insira o volume: ";
                cin >> v;
                tv1.setVolume(v);
                tt1.setTelevisao(tv1, tt1.i);
                tt1.i++;
                break;
            case 2:
                tv1.aumentaVol(v);
                cout << "Feito" << endl;
                break;
            case 3:
                tv1.dimiuiVol(v);
                cout << "Feito" << endl;
                break;
            case 4:
                tv1.mudaCanal(c);
                break;
            case 5:
                cout << "Canal = " << tv1.getCanal() << endl;
                cout << "Volume = " << tv1.getVolume() << endl;
                break;
            case 0:
                cout << "Desligando..." << endl;
                return -1;
        }
    }

    return 0;
}

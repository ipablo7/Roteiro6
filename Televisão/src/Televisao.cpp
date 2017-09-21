#include "Televisao.h"
#include <iostream>

using namespace std;

Televisao::Televisao(){

}

Televisao::~Televisao(){

}

void Televisao::setCanal(int canal){
    this->canal = canal;
}
void Televisao::setVolume(int volume){
    this->volume = volume;
}
void Televisao::setOpcao(char op){
    opcao = op;
}
int Televisao::getCanal(){
    return canal;
}
int Televisao::getVolume(){
    return volume;
}
/*char Televisao::getOpcao(){
    return opcao;
}*/
int Televisao::aumentaVol(int volume){
    this -> volume +=1;
    return volume;
}
int Televisao::dimiuiVol(int volume){
    this -> volume -=1;
    return volume;
}
int Televisao::aumentaCanal(int canal){
    this -> canal +=1;
    return canal;
}
int Televisao::diminuiCanal(int canal){
    this -> canal -=1;
    return canal;
}
void Televisao::mudaCanal(int canal){
    cout << endl << "+ = proximo canal" << endl << "- = canal anterior" << endl << "0 = escolha um canal" << endl;
    cout << "Insira sua opcao: ";
    cin >> opcao;
    setOpcao(opcao);
    switch(opcao){
        case '+':
            cout << "Canal no momento = " << canal << endl;
            aumentaCanal(canal);
            cout << "Mudando de canal..." << endl << "Canal atual = " << getCanal() << endl;
            break;
        case '-':
            cout << "Canal no momento = " << canal << endl;
            diminuiCanal(canal);
            cout << "Mudando de canal..." << endl << "Canal atual = " << getCanal() << endl;
            break;
        case '0':
            cout << "Qual canal deseja selecionar? ";
            cin >> c;
            setCanal(c);
            cout << "Mudando de canal..." << endl << "Canal atual = " << getCanal() << endl;
            break;
    }
}

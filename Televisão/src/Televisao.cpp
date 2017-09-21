#include "Televisao.h"
#include <iostream>

using namespace std;

Televisao::Televisao(){
    canal = 0;
    volume = 0;
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
    this -> volume += 1;
    return volume;
}
int Televisao::dimiuiVol(int volume){
    this -> volume -= 1;
    return volume;
}
int Televisao::aumentaCanal(int canal){
    this -> canal += 1;
    return canal;
}
int Televisao::diminuiCanal(int canal){
    this -> canal -= 1;
    return canal;
}
void Televisao::mudaCanal(int canal){
    cout << "\n" << "+ = proximo canal" << endl << "- = canal anterior" << endl << "0 = escolha um canal" << endl;
    cout << "\n" << "Insira sua opcao: ";
    cin >> opcao;
    setOpcao(opcao);
    switch(opcao){
        case '+':
            cout << "Canal no momento = " << getCanal() << endl;
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

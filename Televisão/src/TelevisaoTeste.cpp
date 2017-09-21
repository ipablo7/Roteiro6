#include "TelevisaoTeste.h"

TelevisaoTeste::TelevisaoTeste()
{
    //ctor
}

TelevisaoTeste::~TelevisaoTeste()
{
    //dtor
}

void TelevisaoTeste::setTelevisao(Televisao televisao, int i){
    this->televisao[i] = televisao;
}

#ifndef TELEVISAOTESTE_H
#define TELEVISAOTESTE_H
#define TAM 3
#include "Televisao.h"

class TelevisaoTeste
{
    public:
        TelevisaoTeste();
        virtual ~TelevisaoTeste();
        int i;
        void setTelevisao(Televisao televisao, int i);
    private:
        Televisao televisao[TAM];
};

#endif // TELEVISAOTESTE_H

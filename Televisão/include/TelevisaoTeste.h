#ifndef TELEVISAOTESTE_H
#define TELEVISAOTESTE_H
#include "Televisao.h"

class TelevisaoTeste
{
    public:
        TelevisaoTeste();
        virtual ~TelevisaoTeste();
        int i;
        void setTelevisao(Televisao televisao);
    private:
        Televisao televisao;
};

#endif // TELEVISAOTESTE_H

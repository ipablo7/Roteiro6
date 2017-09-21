#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    public:
        Televisao();
        virtual ~Televisao();
void setCanal(int canal);
        void setVolume(int volume);
        void setOpcao(char op);
        int getCanal();
        int getVolume();
        char getOpcao();
        int aumentaVol(int volume);
        int dimiuiVol(int volume);
        int aumentaCanal(int canal);
        int diminuiCanal(int canal);
        void mudaCanal(int canal);
        int c;
    private:
        int volume, canal;
        char opcao;
};

#endif // TELEVISAO_H

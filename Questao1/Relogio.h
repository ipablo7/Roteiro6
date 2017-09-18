#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio
{
    private:
        int hora,minuto,segundo;

    public:
        Relogio();

        int getHora();
        int getMinuto();
        int getSegundo();

        void setHora(int);
        void setMinuto(int);
        void setSegundo(int);

        void setHorario(int,int,int);
        void AvancarHorario();
};

#endif

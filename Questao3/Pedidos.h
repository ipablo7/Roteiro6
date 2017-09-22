#ifndef PEDIDOS_H
#define PEDIDOS_H
#include <string>

using namespace std;

class Pedidos
{
    private:
        int numero;
        int quantidade;
        double preco;
        string descricao;

    public:
        Pedidos();
        Pedidos(int,int,double,string);

        void setNumero(int);
        void setQuantidade(int);
        void setPreco(double);
        void setDescricao(string);

        int getNumero();
        int getQuantidade();
        double getPreco();
        string getDescricao();
        double CalcPreco(double preco, int quantidade);
};

#endif

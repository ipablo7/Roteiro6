#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedidos.h"
#define TAM 10


class MesaDeRestaurante
{
    private:
        Pedidos pedido[TAM];
        double total;

    public:
        MesaDeRestaurante();
        int pedidosX;
        void adicionaAoPedido(Pedidos pedidos_, int pedidosX);
        void zeraPedidos(int zera);
        double calculaTotal(int g);

        Pedidos getPedido();
};

#endif

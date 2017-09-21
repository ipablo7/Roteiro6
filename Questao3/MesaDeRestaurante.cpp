#include "MesaDeRestaurante.h"


MesaDeRestaurante::MesaDeRestaurante()
{
    pedidosX = 0;
    total = 0.0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedidos pedido_)
{
    pedido[pedidosX] = pedido_;
    pedidosX++;
    total += pedido_.getPreco();
}

void MesaDeRestaurante::zeraPedidos()
{
    int i;

    for(i=0; i<pedidosX; i++)
        pedido[i].setQuantidade(0);

    total = 0.0;
}

double MesaDeRestaurante::calculaTotal()
{
    return total;
}

Pedidos MesaDeRestaurante::getPedido()
{
    return pedido[pedidosX];
}

int MesaDeRestaurante::getPedidosX()
{
    return pedidosX;
}

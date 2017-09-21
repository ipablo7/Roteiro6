#include "MesaDeRestaurante.h"


MesaDeRestaurante::MesaDeRestaurante()
{
    pedidosX = 0;
    total = 0.0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedidos pedido_, int pedidosX)
{
    pedido[pedidosX] = pedido_;
    total += pedido[pedidosX].getPreco();
    pedidosX++;
}

void MesaDeRestaurante::zeraPedidos()
{
    int i;

    for(i=0; i<TAM; i++){
        pedido[i].setPreco(0);
    }
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

#include "MesaDeRestaurante.h"


MesaDeRestaurante::MesaDeRestaurante()
{
    pedidosX = 0;
    total = 0.0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedidos pedido_, int pedidosX)
{
    pedido[pedidosX] = pedido_;
    pedidosX++;
}

void MesaDeRestaurante::zeraPedidos(int zera)
{
    pedido[zera].setPreco(0);
    pedido[zera].setQuantidade(0);
}

double MesaDeRestaurante::calculaTotal(int g)
{
    for(int i = 0; i < g; i++){
        total += pedido[i].CalcPreco(pedido[i].getPreco(), pedido[i].getQuantidade());
    }
    return total;
}

Pedidos MesaDeRestaurante::getPedido()
{
    return pedido[pedidosX];
}

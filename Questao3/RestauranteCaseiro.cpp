#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{

}

void RestauranteCaseiro::AdicionarAoPedido(Pedidos pedido, int mesax, int g)
{
    mesa[mesax].adicionaAoPedido(pedido, g);
}

double RestauranteCaseiro::calculaTotalRestaurante(int g)
{
    double fatura = 0;
    int j;

    for(j=0; j<TAM; j++)
    {
        fatura += mesa[j].calculaTotal(g);
    }

    return fatura;
}

MesaDeRestaurante RestauranteCaseiro::getMesa(int nMesa){
    return mesa[nMesa];
}

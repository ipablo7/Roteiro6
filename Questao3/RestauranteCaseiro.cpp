#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{

}

void RestauranteCaseiro::AdicionarAoPedido(Pedidos pedido, int mesax)
{
    mesa[mesax].adicionaAoPedido(pedido);
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
    double fatura;
    int j;

    for(j=0; j<TAM; j++)
    {
        fatura += mesa[j].calculaTotal();
    }

    return fatura;
}

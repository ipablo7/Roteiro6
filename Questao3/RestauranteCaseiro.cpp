#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{

}

void RestauranteCaseiro::AdicionarAoPedido(Pedidos pedido, int mesax)
{
    mesa[mesax].adicionaAoPedido(pedido, mesax);
}

double RestauranteCaseiro::calculaTotalRestaurante()
{
    double fatura = 0;
    int j;

    for(j=0; j<TAM; j++)
    {
        fatura += mesa[j].calculaTotal();
    }

    return fatura;
}

MesaDeRestaurante RestauranteCaseiro::getMesa(int nMesa){
    return mesa[nMesa];
}

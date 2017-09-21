#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "Pedidos.h"
#include "MesaDeRestaurante.h"
#define TAM 10


class RestauranteCaseiro
{
    private:
        MesaDeRestaurante mesa[TAM];

    public:
        RestauranteCaseiro();

        void AdicionarAoPedido(Pedidos,int);
        double calculaTotalRestaurante();
        MesaDeRestaurante getMesa(int);






};

#endif

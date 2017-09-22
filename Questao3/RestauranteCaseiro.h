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

        void AdicionarAoPedido(Pedidos,int, int);
        double calculaTotalRestaurante(int g);
        MesaDeRestaurante getMesa(int);
};

#endif

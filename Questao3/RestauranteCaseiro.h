#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"
#include "Pedidos.h"



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

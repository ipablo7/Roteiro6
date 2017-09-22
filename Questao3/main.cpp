#include "Pedidos.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"
#include <iostream>


using namespace std;

int main()
{

	RestauranteCaseiro mesas;
	int opcao, quantidade, numMesa, Opcardp, g = 0, zera;

	while(1)
	{
		cout << "\n\t*** MENU ***" << endl;
        cout << "1 - Novo pedido" << endl;
        cout << "2 - Cancelar pedido" << endl;
        cout << "3 - Fechar a conta" << endl;
        cout << "4 - Sair" << endl;

        cout << "\nEscolhe sua opcao: ";
		cin >> opcao;

		switch(opcao)
		{
			case 1:
			    cout << "\nInforme o numero da mesa: ";
                cin >> numMesa;

				cout << "\t\n*** CARDAPIO \t\t Preco ***" << endl;
				cout << "1 - Hamburguer \t\t R$6,00" << endl;
				cout << "2 - Batata Frita \t R$5,00" << endl;
				cout << "3 - Almoco completo \t R$12,00" << endl;
				cout << "4 - Picanha na brasa\t R$20,00" << endl;
				cout << "5 - Bebidas(diversos) \t R$4,00" << endl;

				cout << "Escolhe sua opcao de cardapio: ";
				cin >> Opcardp;
				cout << "Informe a quantidade desejada: ";
				cin >> quantidade;

				switch(Opcardp)
				{
					case 1:
						mesas.AdicionarAoPedido(Pedidos(1, quantidade, 6.00, "Hamburguer"), numMesa, g);
						g++;
						break;
					case 2:
						mesas.AdicionarAoPedido(Pedidos(2, quantidade, 5.00, "Batata Frita"),numMesa, g);
                        g++;
						break;
					case 3:
						mesas.AdicionarAoPedido(Pedidos(3, quantidade, 12.00, "Almoco completo"),numMesa, g);
						g++;
						break;
					case 4:
						mesas.AdicionarAoPedido(Pedidos(4, quantidade, 20.00, "Picanha na brasa"),numMesa, g);
						g++;
						break;
					case 5:
						mesas.AdicionarAoPedido(Pedidos(5, quantidade, 4.00, "Bebidas(diversos)"),numMesa, g);
						g++;
						break;
				}
				break;
			case 2:
			    cout << "\nInforme o numero da mesa: ";
                cin >> numMesa;

                cout << "Informe o numero do pedido que deseja cancelar: ";
                cin >> zera;

				mesas.getMesa(numMesa).zeraPedidos(zera-1);
				break;
			case 3:
			    cout << "\nInforme o numero da mesa: ";
                cin >> numMesa;

				cout << "Total da conta: " << mesas.getMesa(numMesa).calculaTotal(g) << endl;
				break;
			case 4:
			    cout << "O total arrecadado foi = " << mesas.calculaTotalRestaurante(g) << " reais." << endl;
				return -2;
		}
	}

	return 0;
}


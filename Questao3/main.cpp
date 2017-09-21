#include "Pedidos.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"
#include <iostream>


using namespace std;

int main()
{

	RestauranteCaseiro mesas;
	int opcao, quantidade, numMesa, Opcardp;

	while(1)
	{
		cout << "Informe o numero da mesa: ";
		cin >> numMesa;

		cout << "\t\n*** MENU ***" << endl;
        cout << "1 - Novo pedido" << endl;
        cout << "2 - Cancelar pedido" << endl;
        cout << "3 - Fechar a conta" << endl;
        cout << "4 - Sair" << endl;

        cout << "\nEscolhe sua opcao: ";
		cin >> opcao;

		switch(opcao)
		{
			case '1':
				cout << "\t\n*** CARDAPIO \t Preco ***" << endl;
				cout << "1 - Hamburguer \t R$6,00" << endl;
				cout << "2 - Batata Frita \t R$5,00" << endl;
				cout << "3 - Almoço completo \t R$12,00" << endl;
				cout << "4 - Picanha na brasa\t R$20,00" << endl;
				cout << "5 - Bebidas(diversos) \t R$4,00" << endl;

				cout << "Escolhe sua opcao de cardapio: ";
				cin >> Opcardp;
				cout << "Informe a quantidade desejada: ";
				cin >> quantidade;

				switch(Opcardp)
				{
					case '1':
						mesas.AdicionarAoPedido(Pedidos(1, quantidade, quantidade*6.00, "Hamburguer"),numMesa);
						break;
					case '2':
						mesas.AdicionarAoPedido(Pedidos(2, quantidade, quantidade*5.00, "Batata Frita"),numMesa);
						break;
					case '3':
						mesas.AdicionarAoPedido(Pedidos(3, quantidade, quantidade*12.00, "Almoço completo"),numMesa);
						break;
					case '4':
						mesas.AdicionarAoPedido(Pedidos(4, quantidade, quantidade*20.00, "Picanha na brasa"),numMesa);
						break;
					case '5':
						mesas.AdicionarAoPedido(Pedidos(5, quantidade, quantidade*4.00, "Bebidas(diversos)"),numMesa);
						break;
				}
				break;

			case '2':
				mesas.getMesa(numMesa).zeraPedidos();
				break;

			case '3':
				cout << "Total da conta: " << mesas.getMesas(numMesa).calculaTotal() << endl;
				break;

			case '4':
				break;

		}

		cout << "O total arrecadado foi de: " << mesas.calculaTotalRestaurante() << endl;


	return 0;

}


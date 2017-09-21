#include "Pedidos.h"

Pedidos::Pedidos(int numero, int quantidade, double preco, string descricao)
{
	setNumero(numero);
	setQuantidade(quantidade);
	setPreco(preco);
	setDescricao(descricao);
}

Pedidos::Pedidos()
{
	setNumero(0);
	setDescricao("");
	setQuantidade(0);
	setPreco(0.0);
}

void Pedidos::setNumero(int numero)
{
	this -> numero = numero;
}

void Pedidos::setQuantidade(int quantidade)
{
	this -> quantidade = quantidade;
}

void Pedidos::setPreco(double preco)
{
	this -> preco = preco;
}

void Pedidos::setDescricao(string descricao)
{
	this -> descricao = descricao;
}

int Pedidos::getNumero()
{
    return numero;
}

int Pedidos::getQuantidade()
{
    return quantidade;
}

double Pedidos::getPreco()
{
    return preco;
}

string Pedidos::getDescricao()
{
    return descricao;
}


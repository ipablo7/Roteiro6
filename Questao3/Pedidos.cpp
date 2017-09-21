#include "Pedidos.h"

Pedidos::Pedidos(int num, int quant, double prec, string desc)
{
	setNumero(num);
	setQuantidade(quant);
	setPreco(prec);
	setDescricao(desc);
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


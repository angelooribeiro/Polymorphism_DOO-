#include "triangulo.h"

//construtor
triangulo::triangulo()
{
}

triangulo::inserir(int tamanho, int x, int y)
{
    triangulo(tamanho, x, y);
}

triangulo::triangulo(int tamanho, int x, int y)
{
    ponto centro(x,y);
    this->base = base;
    this->altura = altura;
    this->centro=centro;
}

void triangulo::rodar(int x, int y, int angulo)
{

}

void triangulo::deslocar(int x, int y)
{
    centro = ponto(x,y);
}

float triangulo::calcula_area()
{
    return ((base*altura)/2);
}

int triangulo::getx()
{
    return 0;
}

int triangulo::gety()
{
    return 0;
}

//destrutor
triangulo::~triangulo()
{
}

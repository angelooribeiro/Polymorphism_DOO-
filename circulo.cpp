#include "circulo.h"

circulo::circulo()
{
}

circulo::circulo(float raio, int x, int y)
{
    ponto origem(x,y);
    this->raio = raio;
    this->centro = origem;
}

void circulo::rodar(int x, int y, int angulo)
{
    //quando se roda fica igual
    //nao faz sentido defenir
}

void circulo::deslocar(int x, int y)
{
    centro = ponto(x,y);
}

int circulo::getx()
{
    return centro.x;
}

int circulo::gety()
{
    return centro.y;
}

float circulo::get_raio()
{
    return raio;
}

float circulo::calcula_area()
{
    return ( M_PI * (pow(raio,2)) );
}

circulo::~circulo()
{
}

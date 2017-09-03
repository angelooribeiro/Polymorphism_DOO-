#include "quadrado.h"

//construtor
quadrado::quadrado()
{
}

quadrado::quadrado(float lado, int x, int y)
{
    ponto vertice(x,y);
    this->lado = lado;
    this->vertice = vertice;
}

void quadrado::rodar(int x, int y, int angulo)
{

}

void quadrado::deslocar(int x, int y)
{

}

float quadrado::calcula_area()
{
    return (lado*lado);
}

int quadrado::getx()
{
    return 0;
}

int quadrado::gety()
{
    return 0;
}

//destrutor
quadrado::~quadrado()
{
}

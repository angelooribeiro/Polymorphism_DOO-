#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include <iostream>
#include "desenha.h"
#include "ponto.h"

class triangulo : public desenha
{
    float base = 0;
    float altura = 0;
    ponto centro;

    public:
    triangulo();
    triangulo(float base, float altura, int x, int y);
    void inserir(int tamanho, int x, int y);
    void rodar(int x, int y, int angulo);
    void deslocar(int x, int y);
    float calcula_area();
    int getx();
    int gety();
    ~triangulo();
};

#endif // TRIANGULO_H_

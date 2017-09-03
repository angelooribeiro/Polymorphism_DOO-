#ifndef QUADRADO_H_
#define QUADRADO_H_

#include <iostream>
#include "desenha.h"
#include "ponto.h"

class quadrado : public desenha
{
    float lado;
    ponto vertice;

    public:
    quadrado();
    quadrado(float lado, int x, int y);
    void rodar(int x, int y, int angulo);
    void deslocar(int x, int y);
    float calcula_area();
    int getx();
    int gety();
    ~quadrado();
};

#endif // QUADRADO_H_

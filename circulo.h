#ifndef CIRCULO_H_
#define CIRCULO_H_

#include <iostream>
#include "ponto.h"
#include "desenha.h"
# define M_PI           3.14159265358979323846  /* pi */


class circulo : public desenha
{
    float raio;
    ponto centro;

    public:
    circulo();
    circulo(float raio, int x, int y);
    void rodar(int x, int y, int angulo);
    void deslocar(int x, int y);
    int getx();
    int gety();
    float get_raio();
    float calcula_area();
    ~circulo();
};

#endif // CIRCULO_H_

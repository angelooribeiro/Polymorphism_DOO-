#ifndef DESENHA_H_
#define DESENHA_H_

#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;


class desenha
{
    public:
    desenha();
    void virtual inserir(int tamanho, int x, int y) = 0;
    void virtual rodar(int x, int y, int angulo) = 0;
    void virtual deslocar(int x, int y) = 0;
    float virtual calcula_area() = 0;
    int virtual getx() = 0;
    int virtual gety() = 0;
    ~desenha();
};
#endif // DESENHA_H_

#include "quadrado.h"
#include "triangulo.h"
#include "circulo.h"
#include "desenha.h"
#include "ponto.h"
#include "tela.h"
#include <map>


#include <iostream>
#include <cstdlib>
#include <cstdio>

void imprime_menu()
{
    cout << "1.inserir" << endl;
    cout << "2.apagar" << endl;
    cout << "3.deslocar" << endl;
    cout << "4.listar" << endl;
    cout << "0.sair" << endl;
}

void nomes_figuras()
{
    cout << "1.circulo" << endl;
    cout << "2.quadrado" << endl;
    cout << "3.triangulo" << endl;
    cout << "0.menu anterior" << endl;
}

map<unsigned int, desenha*> desenho;

int main()
{
    unsigned int position = 0, fig=0;
    int x = 0, y = 0, tamanho = 0, tamanho2 = 0;
    int op = 0;
 /*
    circulo f(3,4,5);

    //inserir
    map<unsigned int,desenha*>::iterator it = desenho.end();
    desenho.insert (pair<unsigned int, desenha*>(++position,&f) );
    cout << "polimorfismo" << endl;
    desenho[1]->rodar(1,1,1);
    cout << desenho[1]->getx() << endl;
    cout << desenho[1]->calcula_area() <<endl;
    desenho[1]->deslocar(1,1);
    cout << desenho[1]->getx() << endl;
    cout << "\n\n" << endl;
*/
    do
        {
            system("cls");
            imprime_menu();
            cin >> op;

            switch(op)
            {
            //inserir figura
            case 1:
                do
                {
                    getchar();
                    system("cls");
                    nomes_figuras();
                    cin >> fig;

                    switch(fig)
                    {
                        //circulo
                        case 1:
                        {
                            cout << "inserir origem, x, y" << endl;
                            cin >> x;
                            cin >> y;
                            cout << "inserir raio" << endl;
                            cin >> tamanho;
                            desenho.insert (pair<unsigned int, desenha*>(++position, new circulo(tamanho, x, y)) );
                            cout << "inserido com a chave " << position << endl;
                            getchar();
                        }break;

                        case 2:
                        {
                            cout << "inserir centro do trinagulo x, y" << endl;
                            cin >> x;
                            cin >> y;
                            cout << "inserir o tamanho da base" << endl;
                            cin >> tamanho;
                            cout << "inserir altura" << endl;
                            desenho.insert (pair<unsigned int, desenha*>(++position,new triangulo(tamanho, x, y)) );
                            cout << "inserido com a chave " << position << endl;
                            getchar();
                        }break;

                } while(fig != 0);
                }
                getchar();
                break;
                }
            //apagar figura
            case 2:
            {
                if(!desenho.empty())
                {
                    cout << "insira o numero da figura a eliminar" << endl;
                    cin >> fig;
                    if(fig > 0 && fig <= position)
                    {
                        desenho.erase(fig);
                        cout << "desenho eliminado" << endl;
                    }
                    else
                        cout << "nao encontrado" << endl;
                }
                else
                    cout << "is empty" << endl;
            getchar();
            getchar();
            } break;

            //deslocar
            case 3:
            {
                cout << "insira o indice" << endl;
                cin >> fig;
                if(fig > 0 && fig <= position)
                {
                    cout << "figura nas posiçoes x = "  << desenho[fig]->getx() << endl;
                    cout << "insira as novas coordenadas x,y" << endl;
                    cin >> x >> y;
                    desenho[fig]->deslocar(x,y);
                    cout << "deslocada para x = " << endl;
                }
                else
                    cout << "figrua nao existe" << endl;
                    getchar();
                    getchar();
             }   break;

            //listar
            case 4:
                {
                    if(!desenho.empty())
                    {
                        for(unsigned int u = 0; u < desenho.size(); u++)
                            cout << desenho[u] << endl;
                    }
                    else
                        cout << "is empty" << endl;
                getchar();
                getchar();
                }   break;

            default:
                break;
                }
        } while(op != 0);

   return 0;
}

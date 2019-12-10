#ifndef VOO_H
#define VOO_H
#include "Data.h"
#include "Horario.h"
#include <iostream>
#include <string>
using namespace std;


class Voo
{
    public:
        Voo(int n, Data d, Horario h);
        void setAssento(int a, int pos);
        int proximoLivre();
        string verifica(int a);
        bool ocupa(int a);
        int vagas();
        int getNumero();
        string getData();
        string getHorario();

    private:
        int numero, assento[100];
        Data data;
        Horario horario;
};

#endif // VOO_H

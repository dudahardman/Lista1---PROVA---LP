#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include <iostream>
using namespace std;


class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        void setPagamentos(Pagamento p, int pos);
        double calculaTotalPags();
        bool existePagParaFunc(string n);

    private:
        Pagamento pags[50];
};

#endif // CONTROLEDEPAGAMENTOS_H

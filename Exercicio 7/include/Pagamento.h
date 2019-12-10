#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>
using namespace std;

class Pagamento
{
    public:
        Pagamento();
        Pagamento(string n, double v);
        string getNomeFunc();
        double getValor();
        void setPagamento(string n, double v);

    private:
        double valor;
        string nomeFunc;
};

#endif // PAGAMENTO_H

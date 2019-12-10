#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
using namespace std;

class Invoice
{
    public:
        Invoice();
        Invoice(int n, string d, int qt, double p);
        int getNumero();
        string getDescricao();
        int getQuantidade();
        double getPreco();
        void setFatura(int n, string d, int qt, double p);
        double getInvoiceAmount();

    private:
        int numero, quantidade;
        string descricao;
        double preco;
};

#endif // INVOICE_H

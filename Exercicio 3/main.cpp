#include <iostream>
using namespace std;
#include "Invoice.h"

int main()
{
    int n, qt;
    string d;
    double p;
    Invoice produto = Invoice();

    cout << "Digite um produto(numero, descricao, quantidade e preco): ";
    cin >> n;
    cin >> d;
    cin >> qt;
    cin >> p;

    produto.setFatura(n, d, qt, p);
    cout << "Numero = " << produto.getNumero() << "\nDescricao = " << produto.getDescricao() << endl;
    cout << "Quantidade = " << produto.getQuantidade() << "\nPreco = " << produto.getPreco() << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Fatura = " << produto.getInvoiceAmount() << endl;

    return 0;
}

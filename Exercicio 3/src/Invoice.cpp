#include "Invoice.h"
#include <iostream>
using namespace std;

Invoice::Invoice()
{
    numero = 0;
    descricao = "";
    quantidade = 0;
    preco = 0.0;
}

Invoice::Invoice(int n, string d, int qt, double p){
    setFatura(n,d,qt,p);
}

int Invoice::getNumero(){
    return numero;
}

string Invoice::getDescricao(){
    return descricao;
}
int Invoice::getQuantidade(){
    return quantidade;
}
double Invoice::getPreco(){
    return preco;
}
void Invoice::setFatura(int n, string d, int qt, double p){
    numero = n;
    descricao = d;
    if(qt > 0){
        quantidade = qt;
    }else{
        quantidade = 0;
    }
    if(p > 0){
        preco = p;
    }else{
        preco = 0.0;
    }
}
double Invoice::getInvoiceAmount(){
    double fatura = 0.0;

    fatura = quantidade * preco;

    return fatura;
}

#include "Pagamento.h"
#include <iostream>
using namespace std;

Pagamento::Pagamento()
{
    nomeFunc = "";
    valor = 0.0;
}

Pagamento::Pagamento(string n, double v){
    nomeFunc = n;
    valor = v;
}
string Pagamento::getNomeFunc(){
    return nomeFunc;
}
double Pagamento::getValor(){
    return valor;
}
void Pagamento::setPagamento(string n, double v){
    nomeFunc = n;
    valor = v;
}

#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <iostream>
using namespace std;

ControleDePagamentos::ControleDePagamentos()
{
    //ctor
}

void ControleDePagamentos::setPagamentos(Pagamento p, int pos){
    pags[pos] = p;
}

double ControleDePagamentos::calculaTotalPags(){
    double total;

    for(int i = 0; i < 50; i++){
        total += pags[i].getValor();
    }
    return total;
}

bool ControleDePagamentos::existePagParaFunc(string n){
    string nome;
    for(int j = 0; j < 50; j++){
        nome = pags[j].getNomeFunc();
        if(n == nome){
            return true;
        }
    }
    return false;
}

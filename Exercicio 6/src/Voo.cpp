#include "Voo.h"
#include "Data.h"
#include "Horario.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Voo::Voo(int n, Data d, Horario h)
{
    numero = n;
    data = d;
    horario = h;
    for(int i = 0; i < 100; i++){
        setAssento(-1,i);
    }
}

void Voo::setAssento(int a, int pos){ // o assento escolhido(posição dele) recebe o valor da sua própria posição
    assento[pos] = a;
}
int Voo::proximoLivre(){
    int i;
    for(i = 0; i < 100; i++){
        if(assento[i] == -1){
            return i;
        }
    }
}
string Voo::verifica(int a){
    for(int i = 0; i < 100; i++){
        if(assento[i] == a){
            return "Assento ocupado.";
        }
    }
    return "Assento livre.";
}

bool Voo::ocupa(int a){
    int lugar = a;
    for(int i = 0; i < 100; i++){
        if(assento[i] == a){
            return false;
        }
        assento[lugar] = a;
        return true;
    }
}

int Voo::vagas(){
    int cont = 0;
    for(int i = 0; i < 100; i++){
        if(assento[i] == -1){
            cont++;
        }
    }
    return cont;
}
int Voo::getNumero(){
    return numero;
}
string Voo::getData(){
    stringstream str;
    str << data.getDia() << "/" << data.getMes() << "/" << data.getAno();
    return str.str();
}

string Voo::getHorario(){
    stringstream str2;
    str2 << horario.getHora() << ":" << horario.getMinuto() << ":" << horario.getSegundo();
    return str2.str();
}

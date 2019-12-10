#include "Horario.h"
#include <iostream>
using namespace std;

Horario::Horario()
{
    hora = 0;
    minuto = 0;
    segundo = 0;
}

Horario::Horario(int h, int m, int s){
    setHorario(h,m,s);
}
void Horario::setHorario(int h, int m, int s){
    if((h >= 0) && (h < 24)){
        hora = h;
    }else{
        hora = 0;
    }
    if((m >= 0) && (m < 60)){
        minuto = m;
    }else{
        minuto = 0;
    }
    if((s >= 0) && (s < 60)){
        segundo = s;
    }else{
        segundo = 0;
    }
}
int Horario::getHora(){
    return hora;
}
int Horario::getMinuto(){
    return minuto;
}
int Horario::getSegundo(){
    return segundo;
}
//void Horario::setHora(int h);
//void Horario::setMinuto(int m);
//void Horario::setSegundo(int s);
void Horario::AvancarHorario(){
    if(segundo < 59){
        segundo++;
    }else{
        segundo = 0;
        if(minuto < 59){
            minuto++;
        }else{
            minuto = 0;
            if(hora < 23){
                hora++;
            }else{
                hora = 0;
            }

        }
    }

}

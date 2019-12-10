#include "Data.h"
#include <iostream>
using namespace std;

Data::Data()
{
    dia = 01;
    mes = 01;
    ano = 0001;
}

Data::Data (int d, int m, int a){
    setData(d,m,a);
}

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}
void Data::setData(int d, int m, int a){
    if(d > 0 && d <= 31){
        dia = d;
    }else{
        dia = 01;
    }
    if (m > 0 && m <= 12){
        mes = m;
    }else{
        mes = 01;
    }
    if (a > 0){
        ano = a;
    }else{
        ano = 0001;
    }
}
int Data::compara(Data obj2){
    if (getAno() > obj2.getAno()){
        return 1;
    }
    else if (getAno() < obj2.getAno()){
        return -1;
    }
    else{
        if(getMes() > obj2.getMes()){
            return 1;
        }
        else if(getDia() > obj2.getDia()){
            return 1;
        }
        else{
            return 0;
        }
    }

    if((getDia() > obj2.getDia()) && (getMes() > obj2.getMes()) && (getAno() > obj2.getAno())){
        cout << "entrou 2" << endl;
        return 1;
    }
    if((getDia() < obj2.getDia()) && (getMes() < obj2.getMes()) && (getAno() < obj2.getAno())){
        cout << "entrou 3" << endl;
        return -1;
    }
}

string Data::getMesExtenso(){
    switch(getMes()){
        case 1:
            return "Janeiro";
            break;
        case 2:
            return "Fevereiro";
            break;
        case 3:
            return "Marco";
            break;
        case 4:
            return "Abril";
            break;
        case 5:
            return "Maio";
            break;
         case 6:
            return "Junho";
            break;
         case 7:
            return "Julho";
            break;
         case 8:
            return "Agosto";
            break;
         case 9:
            return "Setembro";
            break;
         case 10:
            return "Outubro";
            break;
         case 11:
            return "Novembro";
            break;
         case 12:
            return "Dezembro";
            break;
    }
}
bool Data::isBissexto(){
    if (getAno() % 4 == 0){
        return true;
    }else{
        return false;
    }
}

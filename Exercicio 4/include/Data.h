#ifndef DATA_H
#define DATA_H
#include <iostream>
using namespace std;

class Data
{
    public:
        Data();
        Data (int d, int m, int a);
        int getDia();
        int getMes();
        int getAno();
        void setData(int d, int m, int a);
        int compara(Data obj2);
        string getMesExtenso();
        bool isBissexto();


    private:
        int dia, mes, ano;
};

#endif // DATA_H

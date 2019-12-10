#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    int d, m , a;
    int comparacao = 0;
    Data data1 = Data(); // data corrente
    Data data2 = Data();

    cout << "Data 1: ";
    cin >> d;
    cin >> m;
    cin >> a;

    data1.setData(d,m,a);

    cout << "\nData 2: ";
    cin >> d;
    cin >> m;
    cin >> a;

    data2.setData(d,m,a);

    cout << "\nData 1: " << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << endl;
    cout << "Data 2: " << data2.getDia() << "/" << data2.getMes() << "/" << data2.getAno() << endl;


    comparacao = data1.compara(data2);
    if(comparacao == 0){
        cout << "\nAs datas sao iguais." << endl;
    }
    if(comparacao == 1){
        cout << "\nData 1 maior que data 2." << endl;
    }
    if(comparacao == -1){
        cout << "\nData 2 maior que data 1." << endl;
    }

    cout << "\nO mes da data 1 eh: " << data1.getMesExtenso() << endl;

    cout << "\n" << data1.isBissexto() << endl;


    return 0;
}

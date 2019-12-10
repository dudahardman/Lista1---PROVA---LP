#include <iostream>
#include "Data.h"
#include "Horario.h"
#include "Voo.h"
using namespace std;

int main()
{
    int dia, mes, ano;
    cout << "Digite a data do voo: ";
    cin >> dia;
    cin >> mes;
    cin >> ano;
    Data d = Data(dia, mes, ano);

    int hora, minuto, segundo;
    cout << "\nDigite o horario do voo: ";
    cin >> hora;
    cin >> minuto;
    cin >> segundo;
    Horario h = Horario(hora, minuto, segundo);

    int numero;
    cout << "\nDigite o numero do voo: ";
    cin >> numero;
    Voo aviao = Voo(numero, d, h);

    int quantAssentos;
    cout << "\nQuantos assentos deseja marcar? ";
    cin >> quantAssentos;

    int a;
    for(int k = 0; k < quantAssentos; k++){
        cout << "Digite seu assento: " << endl;
        cin >> a;
        aviao.setAssento(a,a); // para que o assento escolhido receba o valor da sua posição e o código funcione faça sentido

    }

    cout << "\n\t********** INFORMACOES DO VOO **********" << endl;
    cout << "\n\tNUMERO: " << aviao.getNumero() << endl;
    cout << "\tDATA: " << aviao.getData() << endl;
    cout << "\tHORARIO: " << aviao.getHorario() << endl;
    cout << "\tHa " << aviao.vagas() << " assentos livres." << endl;

    cout << "\nQual assento deseja verificar? ";
    int v;
    cin >> v;
    cout << aviao.verifica(v) << endl;

    cout << "\nProximo assento livre: " << aviao.proximoLivre() << endl;

    return 0;
}



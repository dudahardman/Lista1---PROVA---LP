#include <iostream>
#include "Horario.h"
using namespace std;

int main()
{
    int h, m, s;
    Horario hora = Horario();

    cout << "Digite a hora atual(hora, minuto e segundo): ";
    cin >> h;
    cin >> m;
    cin >> s;
    hora.setHorario(h,m,s);

    cout << hora.getHora() << ":" << hora.getMinuto() << ":" << hora.getSegundo() << endl;

    hora.AvancarHorario();
    cout << "Proximo horario: " << hora.getHora() << ":" << hora.getMinuto() << ":" << hora.getSegundo() << endl;

    return 0;
}

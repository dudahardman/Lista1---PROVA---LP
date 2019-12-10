#include <iostream>
#include "ControleDePagamentos.h"
#include "Pagamento.h"

using namespace std;

int main()
{
    string nome;
    Pagamento pag1 = Pagamento();
    Pagamento pag2 = Pagamento();

    pag1.setPagamento("Joao",985.9);
    pag2.setPagamento("Maria",1000.9);

    ControleDePagamentos control = ControleDePagamentos();

    control.setPagamentos(pag1,1);
    control.setPagamentos(pag2,2);

    cout << "Total de pagamentos: " << control.calculaTotalPags() << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Digite o nome do funcionario que voce deseja buscar: ";
    cin >> nome;
    cout << control.existePagParaFunc(nome);

    return 0;
}

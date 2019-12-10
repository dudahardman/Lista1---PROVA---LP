#include <iostream>
#include "Pessoa.h"
#include <string>

using namespace std;

int main()
{
    string n, t;
    int i, S;

    cout << "Quantas pessoas deseja cadastrar? ";
    cin >> S;
    Pessoa people[S] = Pessoa();

    for (int j = 0; j < S; j++){
        cout << "Digite o nome, idade e telefone:" << endl;
        cin >> n;
        cin >> i;
        cin >> t;
        people[j].setPessoa(n,i,t);
    }

    for (int j = 0; j < S; j++){
        cout << "\t\tPessoa (" << j << "):" << endl;
        cout << "Nome: " << people[j].getNome() << endl;
        cout << "Idade: " << people[j].getIdade() << endl;
        cout << "Telefone: " << people[j].getTelefone() << endl;
        cout << "--------------------------------------------" << endl;
    }

    return 0;
}

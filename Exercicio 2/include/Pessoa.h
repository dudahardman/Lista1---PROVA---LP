#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
    public:
        Pessoa();
        string getNome();
        string getTelefone();
        int getIdade();
        void setPessoa(string n, int i, string t);

    private:
        string nome, telefone;
        int idade;

};

#endif // PESSOA_H

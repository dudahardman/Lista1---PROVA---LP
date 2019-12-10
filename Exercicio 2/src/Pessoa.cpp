#include "Pessoa.h"
#include <iostream>
#include <string>
using namespace std;

Pessoa::Pessoa()
{
    nome = "";
    idade = 0;
    telefone = "";
}

string Pessoa::getNome(){
    return nome;
}
string Pessoa::getTelefone(){
    return telefone;
}
int Pessoa::getIdade(){
    return idade;
}
void Pessoa::setPessoa(string n, int i, string t){
    nome = n;
    idade = i;
    telefone = t;
}

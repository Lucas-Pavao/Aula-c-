#include <iostream>
#include "veiculo.h"
using namespace std;

Roda::Roda()
{
    cout << "Roda criada" << endl;
};

Roda::~Roda()
{
    cout << "Roda Destruida" << endl;
};

Veiculo::Veiculo(const char *nome)
{
    this->nome = string(nome);
    cout << "Veiculo " << nome << " Construido" << endl;
    this->rodas = NULL;
};

Veiculo::~Veiculo()
{
    cout << "Veiculo " << nome << " Destruido" << endl;
    delete[] rodas;
};

void Veiculo::setNumRodas(int num_rodas)
{
    this->num_rodas = num_rodas;
    this->rodas = new Roda[num_rodas];
}

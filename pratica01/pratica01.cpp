#include <iostream>
#include "veiculo.h"
#include "veiculo.cpp"
using namespace std;

int main()
{
    Veiculo veiculo1("veiculo1");
    {
        Veiculo veiculo2("veiculo2");
        {
            Veiculo veiculo3("veiculo3");
        }
    }
    Veiculo *obj1 = new Veiculo("V1 ponteiro");
    {
        delete obj1;
    }

    Veiculo veiculoRodas("v1");
    veiculoRodas.setNumRodas(4);

    int qtdrodas = veiculoRodas.getNumRodas();
    cout << "O veiculo tem " << qtdrodas << " rodas" << endl;
}

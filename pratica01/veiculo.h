#include <iostream>
#ifndef RET_H_
#define RET_H_
using namespace std;

class Roda
{
public:
    Roda();

    ~Roda();
};
class Veiculo
{

private:
    string nome;
    int num_rodas;
    Roda *rodas;

public:
    Veiculo(const char *nome);

    ~Veiculo();

    void setNumRodas(int num_rodas);
    int getNumRodas() { return num_rodas; }
};

#endif /*RET_H_*/
#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED
#include "dominios.h"
using namespace std;

class TUNome{
private:
    //const static int VALOR_VALIDO   = 20;
    //const static int VALOR_INVALIDO = 30;
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    void runNome();
};

class TUSobrenome{
private:
    //const static int VALOR_VALIDO   = 20;
    //const static int VALOR_INVALIDO = 30;
    Sobrenome *sobrenome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    void runSobrenome();
};


#endif // TESTES_H_INCLUDED



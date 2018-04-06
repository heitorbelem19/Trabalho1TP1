#include "dominios.h"
using namespace std;

class TUNome{
private:
    void setUp();
    void tearDown();
    void testarSucesso();
    void testarFalha();
    int estado;
    Nome *nome;
public:
    int run();
    const static int Sucesso = 0;
    const static int Falha = -1;
};

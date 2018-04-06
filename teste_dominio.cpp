#include "teste.h"
using namespace std;

void TUNome::testarSucesso(){
    try{
        nome->setNome("Heitor");
        if(nome->getNome() !=  "Heitor"){
            estado = Falha;
        }
        else
            cout << "SUCESSO\n";
    }catch(invalid_argument){
        estado = Falha;
    }
}

void TUNome::testarFalha(){
    try{
        nome->setNome("HEitor");
        estado = Falha;
    }catch(invalid_argument){
        cout << "FALHA\n";
        return;
    }
}

void TUNome::setUp(){
    nome = new Nome("");
    estado = Sucesso;
}

void TUNome::tearDown(){
    delete nome;
}
int TUNome::run(){
    setUp();
    testarSucesso();
    testarFalha();
    tearDown();
}

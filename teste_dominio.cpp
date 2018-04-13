#include "teste.h"

void TUNome::setUp(){
    nome = new Nome("");
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome("Heitor");
        cout << "SUCESSO NOME"<<endl;
        if (nome->getNome() != "Heitor")
            estado = FALHA;
    }
    catch(invalid_argument ){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(" Heitor");
        estado = FALHA;
    }
    catch(invalid_argument ){
        cout << "FALHA NOME"<<endl;
        return;
    }
}

void TUNome::runNome(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}

//---------------------------------------------------

//Métodos do teste de Unidade para Sobrenome
void TUSobrenome::setUp(){
    sobrenome = new Sobrenome("");
    estado = SUCESSO;
}

void TUSobrenome::tearDown(){
    delete sobrenome;
}

void TUSobrenome::testarCenarioSucesso(){
    try{
        sobrenome->setSobrenome("Heitor");
        cout << "SUCESSO SOBRENOME"<<endl;
        if (sobrenome->getSobrenome() != "Heitor")
            estado = FALHA;
    }
    catch(invalid_argument ){
        estado = FALHA;
    }
}

void TUSobrenome::testarCenarioFalha(){
    try{
        sobrenome->setSobrenome("HEitor");
        estado = FALHA;
    }
    catch(invalid_argument ){
        cout << "FALHA SOBRENOME"<<endl;
        return;
    }
}

void TUSobrenome::runSobrenome(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}


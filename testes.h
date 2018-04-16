#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED
#include "dominio.h"
#include "entidades.h"
#include <iostream>
#include <string.h>
#include<cctype>
using namespace std;

//Classes dos Testes de Unidade de dominios
class TUNome{
private:
    //const static int VALOR_VALIDO   = 20;
    //const static int VALOR_INVALIDO = 30;
    Nome *nome;
    int estado;
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    const char valido[20] = "Heitor";
    const char invalido[20] = "HEitor";
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
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    const char valido[20] = "Oliveira";
    const char invalido[20] = "oliveirA";
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    void runSobrenome();
};

class TUTelefone{
private:
    //const static int VALOR_VALIDO   = 20;
    //const static int VALOR_INVALIDO = 30;
    Telefone *telefone;
    int estado;
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    const char valido[20] = "61 8189-4567";
    const char invalido[20] = "6181894567";
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    void runTelefone();
};

class TUEndereco{
private:
    Endereco *endereco;
    int estado;
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    const char valido[20] = "SHIN QL 4";
    const char invalido[20] = " SQS 12 ";
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    void runEndereco();
};

class TUData{
private:
    Data *data;
    int estado;
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    const char valido[20] = "21/12/2012";
    const char invalido[20] = "30/02/2015";
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    void runData();
};

class TUEmail{
private:
    Email *email;
    int estado;
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    const char valido[20] = "felipe@gmail.com";
    const char invalido[20] = "felipegmail.com";
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    void runEmail();
};

class TUTexto{
private:
    Texto *texto;
    int estado;
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    const char valido[20] = "Heitor";
    const char invalido[20] = "";
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    void runTexto();
};

class TUIdioma{
private:
    Idioma *idioma;
    int estado;
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    const char valido[20] = "ENG";
    const char invalido[20] = "eng";
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    void runIdioma();
};

class TUTermo{
private:
    const  string Valido = "PT";
    const string Invalido = "np";
    Termo *termo;
    int estado;
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    void runTermo();
};

class TUSenha{
private:
    Senha *senha;
    int estado;
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    const char valido[20] = "He1tor12";
    const char invalido[20] = "HEit0r";
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    void runSenha();
};
//***************************************************************************
//***************************************************************************


//Classes dos Testes de Unidade das Entidades
class TULeitor{
private:
    Leitor *leitor;
    int estado;
    void teardown();
    void testarCenarioSucesso();
    const char ValidoNome[20] = "Heitor",ValidoSobrenome[20] = "Belem";
    const char ValidoSenha[20] = "Hie4ghyt",ValidoEmail[50] ="f1lipeayres@gmail.com";
public:
    void runLeitor();
};

class TUDev{
private:
    Desenvolvedor *dev;
    int estado;
    void teardown();
    void testarCenarioSucesso();
    const char ValidoNome[20] = "Heitor",ValidoSobrenome[20] = "Belem";
    const char ValidoSenha[20] = "Hie4ghyt",ValidoEmail[50] ="f1lipeayres@gmail.com";
    const char ValidoData[14] = "30/01/2000";
public:
    void runDev();
};

class TUAdm{
private:
    Administrador *adm;
    int estado;
    void teardown();
    void testarCenarioSucesso();
    const char ValidoNome[20] = "Heitor",ValidoSobrenome[20] = "Belem";
    const char ValidoSenha[20] = "Hie4ghyt",ValidoEmail[50] ="f1lipeayres@gmail.com";
    const char ValidoData[14] = "30/01/2000";
    const char ValidoEndereco[30] = "SQS 116", ValidoTelefone[14] = "61 9123-8321";
public:
    void runAdm();
};

class TUEntidadeTermo{
private:
    EntidadeTermo *termo;
    int estado;
    void teardown();
    void testarCenarioSucesso();
    const char ValidoNome[20] = "Heitor";
    const char ValidoTermo[31] = "PT";
    const char ValidoData[14] = "30/01/2000";
public:
    void runEntidadeTermo();
};

class TUVocabulario{
private:
    Vocabulario *vocab;
    int estado;
    void teardown();
    void testarCenarioSucesso();
    const char ValidoIdioma[4] = "ENG";
    const char ValidoNome[20] = "Heitor";
    const char ValidoData[14] = "30/01/2000";
public:
    void runVocabulario();
};

class TUDefinicao{
private:
    Definicao *definicao;
    int estado;
    void teardown();
    void testarCenarioSucesso();
    const char ValidoTexto[50] = "A1b2c#A1b2c#A1b2c#A1b2c#A1b2c#";
    const char ValidoData[14] = "30/01/2000";
public:
    void runDefinicao();
};

#endif

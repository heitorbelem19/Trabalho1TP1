#include "testes.h"

//Métodos dos Testes de Unidade de Dominio

//Métodos do teste de Unidade para nome
void TUNome::tearDown(){
    delete nome;
}
void TUNome::testarCenarioSucesso(){
    try{
        nome = new Nome(valido);
        cout << "SUCESSO NOME"<<endl;
        if (nome->getNome() != valido)
            estado = FALHA;
    }
    catch(int x ){
        estado = FALHA;
    }
}
void TUNome::testarCenarioFalha(){
    try{
        nome = new Nome(invalido);
        estado = FALHA;
    }
    catch(int x){
        if (x == 1)
            cout << "FALHA NOME: Primeira letra deve ser Maiuscula!" << endl;
        else if(x == 2)
            cout << "FALHA NOME: Nome ultrapassa limite permitido" << endl;
        else if(x == 3)
            cout << "FALHA NOME: Nao pode possuir mais de uma letra maiuscula ou caracteres especiais!" << endl;
    }
}
void TUNome::runNome(){
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}


//Métodos do teste de Unidade para Sobrenome
void TUSobrenome::tearDown(){
    delete sobrenome;
}
void TUSobrenome::testarCenarioSucesso(){
    try{
        sobrenome=new Sobrenome(valido);
        cout << "SUCESSO SOBRENOME"<<endl;
        if (sobrenome->getSobrenome() != "Heitor")
            estado = FALHA;
    }
    catch(int x){
        estado = FALHA;
    }
}
void TUSobrenome::testarCenarioFalha(){
    try{
        sobrenome = new Sobrenome(invalido);
        estado = FALHA;
    }
    catch(int x){
        if(x==1)
            cout << "FALHA SOBRENOME: Primeira letra deve ser Maiuscula! " << endl;
        else if(x==2)
            cout << "FALHA SOBRENOME: Sobrenome ultrapassa limite permitido" << endl;
        else
            cout << "FALHA SOBRENOME: Nao pode possuir mais de uma letra maiuscula ou caracteres especiais!" <<endl;
    }
}
void TUSobrenome::runSobrenome(){
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}


//Métodos do teste de Unidade para telefone
void TUTelefone::tearDown(){
    delete telefone;
}
void TUTelefone::testarCenarioSucesso(){
    try{
        telefone = new Telefone(valido);
        cout << "SUCESSO TELEFONE"<<endl;
        if (telefone->getTelefone() != valido)
            estado = FALHA;
    }
    catch(int x){
        estado = FALHA;
    }
}
void TUTelefone::testarCenarioFalha(){
    try{
        telefone = new Telefone(invalido);
        estado = FALHA;
    }
    catch(int x){
        cout << "FALHA TELEFONE\n"<<endl;
        return;
    }
}
void TUTelefone::runTelefone(){
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}


// Teste para o endereco
void TUEndereco::tearDown(){
    delete endereco;
}
void TUEndereco::testarCenarioSucesso(){
    try{
        endereco = new Endereco(valido);
        cout << "SUCESSO ENDERECO"<<endl;
        if (endereco->getEndereco() != valido)
            estado = FALHA;
    }
    catch(int x){
        estado = FALHA;
    }
}
void TUEndereco::testarCenarioFalha(){
    try{
        endereco= new Endereco(invalido);
        estado = FALHA;
    }
    catch(int x){
        cout << "FALHA ENDERECO\n"<<endl;
        return;
    }
}
void TUEndereco::runEndereco(){
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}


//Métodos do teste de Unidade para data
void TUData::tearDown(){
    delete data;
}
void TUData::testarCenarioSucesso(){
    try{
        data = new Data(valido);
        cout << "SUCESSO DATA"<<endl;
        if (data->getData() != valido)
            estado = FALHA;
    }
    catch(int x){
        estado = FALHA;
    }
}
void TUData::testarCenarioFalha(){
    try{
        data= new Data(invalido);
        estado = FALHA;
    }
    catch(int x){
        cout << "FALHA DATA\n"<<endl;
        return;
    }
}
void TUData::runData(){
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}


// Testes para a classe de email
void TUEmail::tearDown(){
    delete email;
}
void TUEmail::testarCenarioSucesso(){
    try{
        email = new Email(valido);
        cout << "SUCESSO EMAIL"<<endl;
        if (email->getEmail() != "valido")
            estado = FALHA;
    }
    catch(int x){
        estado = FALHA;
    }
}
void TUEmail::testarCenarioFalha(){
    try{
        email = new Email("invalido");
        estado = FALHA;
    }
    catch(int x){
        cout << "FALHA EMAIL\n"<<endl;
        return;
    }
}
void TUEmail::runEmail(){
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}


//Métodos do teste de Unidade para texto
void TUTexto::tearDown(){
    delete texto;
}
void TUTexto::testarCenarioSucesso(){
    try{
        texto = new Texto("aaaaaaaaaaaaaaaaaaaaaaaaa");
        cout << "SUCESSO TEXTO"<<endl;
        if (texto->getTexto() != "aaaaaaaaaaaaaaaaaaaaaaaaa")
            estado = FALHA;
    }
    catch(int x){
        estado = FALHA;
    }
}
void TUTexto::testarCenarioFalha(){
    try{
        texto= new Texto("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
        estado = FALHA;
    }
    catch(int x){
        cout << "FALHA TEXTO\n"<<endl;
        return;
    }
}
void TUTexto::runTexto(){
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}


//Métodos do teste de Unidade para idioma
void TUIdioma::tearDown(){
    delete idioma;
}
void TUIdioma::testarCenarioSucesso(){
    try{
        idioma = new Idioma(valido);
        cout << "SUCESSO IDIOMA"<<endl;
        if (idioma->getIdioma() != valido)
            estado = FALHA;
    }
    catch(int x){
        estado = FALHA;
    }
}
void TUIdioma::testarCenarioFalha(){
    try{
        idioma = new Idioma(invalido);
        estado = FALHA;
    }
    catch(int x ){
        cout << "FALHA IDIOMA\n"<<endl;
        return;
    }
}
void TUIdioma::runIdioma(){
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}


//Métodos do teste de Unidade para termo
void TUTermo::tearDown(){
    delete termo;
}
void TUTermo::testarCenarioSucesso(){
    try{
        termo = new Termo(Valido);
        cout << "SUCESSO TERMO"<<endl;
        if (termo->getTermo() != Valido)
            estado = FALHA;
    }
    catch(int x){
        estado = FALHA;
    }
}
void TUTermo::testarCenarioFalha(){
    try{
        termo = new Termo(Invalido);
        estado = FALHA;
    }
    catch(int x){
        cout << "FALHA TERMO\n"<<endl;
        return;
    }
}
void TUTermo::runTermo(){
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}


//Métodos do teste de Unidade para senha
void TUSenha::tearDown(){
    delete senha;
}
void TUSenha::testarCenarioSucesso(){
    try{
        senha = new Senha(valido);
        cout << "SUCESSO SENHA"<<endl;
        if (senha->getSenha() != valido)
            estado = FALHA;
    }
    catch(int x){
        estado = FALHA;
    }
}
void TUSenha::testarCenarioFalha(){
    try{
        senha = new Senha(invalido);
        estado = FALHA;
    }
    catch(int x){
        cout << "FALHA SENHA\n"<<endl;
        return;
    }
}
void TUSenha::runSenha(){
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
}
//********************************************************************************
//********************************************************************************

//Métodos para Teste de Unidade das Entidades

//Métodos do teste de Unidade para Leitor
void TULeitor::teardown(){
    delete leitor;
}
void TULeitor::testarCenarioSucesso(){
    try {
        leitor = new Leitor();
        if (!leitor->Criar_leitor(ValidoNome,ValidoSobrenome,ValidoEmail,ValidoSenha))
                throw 4;
        cout << "SUCESSO LEITOR"<<endl;
    }catch(int x){
        cout << "FALHA LEITOR"<< endl;
    }
}
void TULeitor::runLeitor(){
    testarCenarioSucesso();
    teardown();
}


//Métodos do teste de Unidade para Desenvolvedor
void TUDev::teardown(){
    delete dev;
}
void TUDev::testarCenarioSucesso(){
    try {
        dev = new Desenvolvedor();
        if (!dev->Criar_desenvolvedor(ValidoNome,ValidoSobrenome,ValidoEmail,ValidoSenha,ValidoData))
                throw 4;
        cout << "SUCESSO DESENVOLVEDOR"<<endl;
    }catch(int x){
        cout << "FALHA DESENVOLVEDOR"<< endl;
    }
}
void TUDev::runDev(){
    testarCenarioSucesso();
    teardown();
}


//Métodos do teste de unidade para Administrador
void TUAdm::teardown(){
    delete adm;
}
void TUAdm::testarCenarioSucesso(){
    try {
        adm = new Administrador();
        if (!adm->Criar_administrador(ValidoNome,ValidoSobrenome,ValidoEmail,ValidoSenha,ValidoData,ValidoTelefone,ValidoEndereco))
                throw 4;
        cout << "SUCESSO ADMINISTRADOR"<<endl;
    }catch(int x){
        cout << "FALHA ADMINISTRADOR"<< endl;
    }
}
void TUAdm::runAdm(){
    testarCenarioSucesso();
    teardown();
}

//Métodos para teste de Unidade da Classe de Termo
void TUEntidadeTermo::teardown(){
    delete termo;
}
void TUEntidadeTermo::testarCenarioSucesso(){
    try {
        termo = new EntidadeTermo();
        if (!termo->Criar_termo(ValidoNome,ValidoTermo,ValidoData))
                throw 4;
        cout << "SUCESSO ENTIDADE TERMO"<<endl;
    }catch(int x){
        cout << "FALHA ENTIDADE TERMO"<< endl;
    }
}
void TUEntidadeTermo::runEntidadeTermo(){
    testarCenarioSucesso();
    teardown();
}


//Métodos para teste de Unidade da classe Vocabulario
void TUVocabulario::teardown(){
    delete vocab;
}
void TUVocabulario::testarCenarioSucesso(){
    try{
        vocab = new Vocabulario();
        if(!vocab->Criar_vocabulario(ValidoNome,ValidoIdioma,ValidoData))
            throw 4;
        cout << "SUCESSO VOCABULARIO"<<endl;
        }
    catch(int x){
        cout << "FALHA VOCABULARIO"<< endl;
    }
}
void TUVocabulario::runVocabulario(){
    testarCenarioSucesso();
    teardown();
}



//Métodos para Teste de Unidade da Definicao
void TUDefinicao::teardown(){
    delete definicao;
}
void TUDefinicao::testarCenarioSucesso(){
    try{
        definicao = new Definicao();
        if(!definicao->Criar_definicao(ValidoTexto,ValidoData))
            throw 4;
        cout << "SUCESSO DEFINICAO"<<endl;
        }
    catch(int x){
        cout << "FALHA DEFINICAO"<< endl;
    }
}
void TUDefinicao::runDefinicao(){
    testarCenarioSucesso();
    teardown();
}

//********************************************************************************
//********************************************************************************

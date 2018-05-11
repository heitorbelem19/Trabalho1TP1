#include "teste.h"

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
            cout << "FALHA NOME: Primeira letra deve ser Maiuscula\n" << endl;
        else if(x == 2)
            cout << "FALHA NOME: Nome ultrapassa limite permitido\n" << endl;
        else if(x == 3)
            cout << "FALHA NOME: Nao pode possuir mais de uma letra maiuscula ou caracteres especiais\n" << endl;
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
            cout << "FALHA SOBRENOME: Primeira letra deve ser Maiuscula\n" << endl;
        else if(x==2)
            cout << "FALHA SOBRENOME: Sobrenome ultrapassa limite permitido\n" << endl;
        else
            cout << "FALHA SOBRENOME: Nao pode possuir mais de uma letra maiuscula ou caracteres especiais\n" <<endl;
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
       cout << "FALHA TELEFONE: Numero de telefone invalido\n" << endl;
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
        if(x == 1)
            cout << "FALHA ENDERECO: Endereco ultrapassa limite permitido\n" << endl;
        else if(x == 2)
            cout << "FALHA ENDERECO: Nao pode haver espacos em branco no comeco ou no fim do campo Endereco\n" << endl;
        else if(x == 3)
            cout << "FALHA ENDERECO: Nao pode haver espacos em branco seguidos\n" << endl;
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
       catch (int x){
        if (x == 1)
            cout << "FALHA DATA: Formato errado de data\n" << endl;
        else if(x == 2)
            cout << "FALHA DATA: Formato invalido para os D,M,A\n\n" << endl;
        else if(x == 3)
            cout << "FALHA DATA: Dia 0 nao existe\n" << endl;
        else if(x == 4)
            cout << "FALHA DATA: Mes com no maximo 31 dias\n" << endl;
        else if(x == 5)
            cout << "FALHA DATA: Mes com no maximo 30 dias\n" << endl;
        else if(x == 6)
            cout << "FALHA DATA: Dia inexistente\n" << endl;
        else if(x == 7)
            cout << "FALHA DATA: Dia inexistente\n" << endl;
        else if(x == 8)
            cout << "FALHA DATA: Mes inexistente\n" << endl;
        else if(x == 8)
            cout << "FALHA DATA: Ano fora dos parametros\n" << endl;

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
        if (x == 1)
            cout << "FALHA EMAIL: Deve conter arroba\n" << endl;
        else if(x == 2)
            cout << "FALHA EMAIL: Nao pode existir espaco no comeco ou no final da parte local\n" << endl;
        else if(x == 3)
            cout << "FALHA EMAIL: Nao pode conter hifens nesses lugares\n" << endl;
        else if(x == 4)
            cout << "FALHA EMAIL: O dominio nao pode conter caracteres especiais" << endl;
        else if(x == 5)
            cout << "FALHA EMAIL: O dominio nao pode ser so de numeros" << endl;
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
        cout << "FALHA TEXTO: Texto maior que o limite permitido\n" << endl;
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
     catch(int x){
        cout << "FALHA IDIOMA: Idioma selecionado nao existe\n" << endl;
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
        cout << "FALHA TERMO: Termo selecionado nao existe\n"<<endl;
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
        if (x == 1)
            cout << "FALHA SENHA: A senha deve conter exatamente 8 caracteres\n" << endl;
        else if(x == 2)
            cout << "FALHA SENHA: A senha nao pode conter caracteres especiais\n" << endl;
        else if(x == 3)
            cout << "FALHA SENHA: A senha deve contar pelo menos uma letra maiúscula,uma minúscula e um digito\n" << endl;
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
        leitor->Criar_leitor(ValidoNome,ValidoSobrenome,ValidoEmail,ValidoSenha);
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
        dev->Criar_desenvolvedor(ValidoNome,ValidoSobrenome,ValidoEmail,ValidoSenha,ValidoData);
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
        adm->Criar_administrador(ValidoNome,ValidoSobrenome,ValidoEmail,ValidoSenha,ValidoData,ValidoTelefone,ValidoEndereco);
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
        termo->Criar_termo(ValidoNome,ValidoTermo,ValidoData);
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
        vocab->Criar_vocabulario(ValidoNome,ValidoIdioma,ValidoData);
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
        definicao->Criar_definicao(ValidoTexto,ValidoData);

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

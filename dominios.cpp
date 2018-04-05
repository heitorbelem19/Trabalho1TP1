#include "dominios.h"
#include <bits/stdc++.h>
using namespace std;


//Métodos da Classe Nome
void Nome::setNome(string nome)throw (invalid_argument){
    validar(nome);
    this->nome = nome;
}

string Nome::getNome(){
    return this->nome;
}

void Nome::validar(string nome)throw (invalid_argument){
    int indice = 1;
    if(islower(nome[0]))
        throw invalid_argument ("Primeira letra deve ser Maiuscula!\n");
    if(nome.length() >= 20)
        throw invalid_argument ("Nome ultrapassa limite permitido\n");

    while(nome[indice] != '\0'){
        if(islower(nome[indice]) && isalpha(nome[indice]))
            indice++;
        else
            throw invalid_argument ("Nao pode possuir mais de uma letra maiuscula ou caracteres especiais!\n");
    }
}
//--------------------------------------------------------------------


//Métodos da Classe Sobrenome
void Sobrenome::setSobrenome(string Sobrenome)throw (invalid_argument){
    validar(Sobrenome);
    this->sobrenome = sobrenome;
}

string Sobrenome::getSobrenome(){
    return this->sobrenome;
}

void Sobrenome::validar(string sobrenome)throw (invalid_argument){
    int indice = 1;
    if(islower(sobrenome[0]))
        throw invalid_argument ("Primeira letra deve ser Maiuscula!\n");

    if(sobrenome.length() >= 20)
        throw invalid_argument ("Sobrenome ultrapassa limite permitido\n");

    while(sobrenome[indice] != '\0'){
        if(islower(sobrenome[indice]) && isalpha(sobrenome[indice]))
            indice++;
        else
            throw invalid_argument ("Nao pode possuir mais de uma letra maiuscula ou caracteres especiais!\n");
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Telefone
void Telefone::setTelefone(string telefone)throw (invalid_argument){
    this->telefone = telefone;
}

string Telefone::getTelefone(){
    return this->telefone;
}

void Telefone::validar(string telefone)throw (invalid_argument){
    for(int indice = 0; indice < telefone.length() - 1; indice++){
        if(indice == 0 || indice == 1){
            if(!isdigit(telefone[indice])){
                throw invalid_argument ("DDD nao pode conter caracteres que nao sejam numeros\n");
            }
        }
        else if (indice == 8){
            if(telefone[indice] != '-'){
                throw invalid_argument ("Numero de telefone invalido\n");
            }
        }
        else{
            if(!isdigit(telefone[indice])){
                throw invalid_argument ("Numero de telefone invalido\n");
            }
        }
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Endereço
void Endereco::setEndereco(string endereco)throw (invalid_argument){
    this->endereco = endereco;
}

string Endereco::getEndereco(){
    return this->endereco;
}

void Endereco::validar(string endereco)throw (invalid_argument){
    if(endereco.length() >= 20)
        throw invalid_argument ("Endereco ultrapassa limite permitido\n");
    if(isspace(endereco[0]) || isspace(endereco[endereco.length()]-1))
        throw invalid_argument ("Nao pode haver espacos em branco no comeco ou no fim do campo Endereco\n");
    for(int indice = 0; indice < endereco.length(); indice++){
        if(endereco[indice] == ' ' && endereco[indice+1] == ' ')
            throw invalid_argument ("Nao pode haver espacos em branco seguidos\n");
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Data
void Data::setData(string data)throw (invalid_argument){
    this->data = data;
}

string Data::getData(){
    return this->data;
}

void Data::validar(string data)throw (invalid_argument){

}


// Metodos de classe para o correio eletronico
void Email::setEmail(string email)throw (invalid_argument){
    this->email = email;
}

string Email:getEmail(){
    return this->email
}

void Email::validar(string email)throw (invalid_argument){
    for(indice == 0; indice < email.length();indice++){
        if(email[0] || email)
    }
}
//-------------------------------------------------------------------------
   
   
//Métodos da Classe Senha
void Senha::setSenha(string senha)throw (invalid_argument){
    this->senha = senha;
}

string Senha::getSenha(){
    return this->senha;
}
void Senha::validar(string senha)throw (invalid_argument){
if(senha.lenth() != 8)
    throw "A senha deve conter exatamente 8 caracteres"
for(int indice = 0; indice < senha.length() - 1; indice++){
    bool maiuscula = false,minuscula = false,numero = false;

    if (!isalpha(senha[indice]) && !isdigit(senha[indice]))
        throw "A senha nao pode conter caracteres especiais";

    if(islower(senha[indice]))
        minuscula = true;
    else if(isupper(senha[indice]))
        maiuscula = true;
    else if(isdigit(senha[indice]))
        numero = true;
}
    if(!numero || !minuscula || !maiuscula)
        throw "A senha deve contar pelo menos uma letra maiúscula,uma minúscula e um digito";


    //if(nome.find(senha) != std::npos)
       // throw "A senha nao pode conter o nome do usuario"
//------------------------------------------------------------------------


//Métodos da Classe Texto
void Texto::setTexto(string texto)throw (invalid_argument){
    this->texto = texto;
}

string Texto::getTexto(){
    return this->texto;
}

void Texto::validar(string texto)throw (invalid_argument){
    if(texto.length() > 30)
        throw "Texto maior que o limite permitido\n";
}
//------------------------------------------------------------------------






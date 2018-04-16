#include "entidades.h"
#include "dominio.h"
#include <iostream>
#include <string.h>
#include<cctype>

//Métodos para a classe leitor
Leitor::Leitor(){
    this->nome = Nome();
    this->sobrenome = Sobrenome();
    this->senha = Senha();
    this->email = Email();
}
/**
 * Funcao destinada a criacao do Leitor indicado pelos campos informados pelos argumentos
 * @return Retorna se foi possivel ou nao criar a entidade leitor.
 */
bool Leitor::Criar_leitor(string nome,string sobrenome,string email, string senha){
    if(!this->nome.setNome(nome) || !this->sobrenome.setSobrenome(sobrenome) || !this->senha.setSenha(senha) || !this->email.setEmail(email))
        return false;
    return true;
}
//*****************************************************************************
//*****************************************************************************


//Métodos para a classe Desenvolvedor
Desenvolvedor::Desenvolvedor(){
    Leitor();
    this->data = Data();
}
/**
 * Funcao destinada a fazer a criacao do Desdenvolvedor indicado pelos campos informados pelos argumentos.
 * Para isso ele cria um leitor e acrescenta uma data a estrutura.
 * @return Retorna se foi possivel ou nao criar a entidade desenvolvedor.
 */
bool Desenvolvedor::Criar_desenvolvedor(string nome,string sobrenome,string email, string senha, string data){
    if(!Criar_leitor(nome,sobrenome, email, senha) || !this->data.setData(data))
        return false;
    return true;
}
//*****************************************************************************
//*****************************************************************************


//Métodos para a classe Administrador
Administrador::Administrador(){
    Desenvolvedor();
    this->telefone = Telefone();
    this->endereco = Endereco();
}
/**
 * Funcao destinada a fazer a criacao do Administrador indicado pelos campos informados pelos argumentos.
 * Para isso ele cria um desenvolvedor e acrescenta um telefone e um endereco a estrutura.
 * @return Retorna se foi possivel ou nao criar a entidade administrador.
 */
bool Administrador::Criar_administrador(string nome,string sobrenome,string email, string senha, string data, string telefone, string endereco){
    if(!Criar_desenvolvedor(nome,sobrenome,email,senha,data)|| !this->telefone.setTelefone(telefone)|| !this->endereco.setEndereco(endereco))
        return false;
    return true;
}
//*****************************************************************************
//*****************************************************************************


//Métodos para a classe Vocabulário
Vocabulario::Vocabulario(){
    this->nome = Nome();
    this->idioma = Idioma();
    this->data = Data();
}
/**
 * Funcao destinada a fazer a criacao do vocabulario indicado pelos dominios informados pelos argumentos.
 * @return Retorna se foi possivel ou nao criar a entidade vocabulario.
 */
bool Vocabulario::Criar_vocabulario(string nome, string idioma, string data){
    if(!this->nome.setNome(nome) || !this->idioma.setIdioma(idioma) || !this->data.setData(data))
        return false;
    return true;
}
//*****************************************************************************
//*****************************************************************************


//Métodos para a classe de Entidade Termo
EntidadeTermo::EntidadeTermo(){
    this->nome = Nome();
    this->data = Data();
    this->termo = Termo();
}
/**
 * Funcao destinada a fazer a criacao do Entidadetermo indicado pelos dominios informados pelos argumentos.
 * @return Retorna se foi possivel ou nao criar a entidadetermo.
 */
bool EntidadeTermo::Criar_termo(string nome, string termo, string data){
    if(!this->nome.setNome(nome)||! this->termo.setTermo(termo) ||!this->data.setData(data))
        return false;
    return true;
}
//*****************************************************************************
//*****************************************************************************


//Metodos para a classe de Texto de Definicao
Definicao::Definicao(){
    this->texto = Texto();
    this->data = Data();
}
/**
 * Funcao destinada a fazer a criacao da Definicao indicado pelos dominios informados pelos argumentos.
 * @return Retorna se foi possivel ou nao criar a entidade Definicao.
 */
bool Definicao::Criar_definicao(string texto, string data){
    if(!this->texto.setTexto(texto) ||!this->data.setData(data))
        return false;
    return true;
}
//*****************************************************************************
//*****************************************************************************





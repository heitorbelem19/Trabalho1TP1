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
 * Funcao destinada a verificacao da existencia da string nome, na string senha
 * @return Retorna true se o nome estiver contido na senha e false se nao estiver.
 */
void Leitor::CheckSubstring(string firstString,string secondString){
    for (unsigned int i = 0; i < firstString.size(); i++){
        int j = 0;
        if(firstString[i] == secondString[j]){
            while (firstString[i] == secondString[j] && j < secondString.size()){
                j++;
                i++;
            }

            if (j == secondString.size())
                    throw 7;
        }
    }
}

/**
 * Funcao destinada a criacao do Leitor indicado pelos campos informados pelos argumentos
 * @return Retorna se foi possivel ou nao criar a entidade leitor.
 */
void Leitor::Criar_leitor(string nome,string sobrenome,string email, string senha){
    this->nome.setNome(nome);
    this->sobrenome.setSobrenome(sobrenome);
    this->senha.setSenha(senha);
    CheckSubstring(this->senha.getSenha(),this->nome.getNome());
    this->email.setEmail(email);
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
void Desenvolvedor::Criar_desenvolvedor(string nome,string sobrenome,string email, string senha, string data){
    Criar_leitor(nome,sobrenome, email, senha);
    this->data.setData(data);
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
void Administrador::Criar_administrador(string nome,string sobrenome,string email, string senha, string data, string telefone, string endereco){
    Criar_desenvolvedor(nome,sobrenome,email,senha,data);
    this->telefone.setTelefone(telefone);
    this->endereco.setEndereco(endereco);

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
void Vocabulario::Criar_vocabulario(string nome, string idioma, string data){
    this->nome.setNome(nome);
    this->idioma.setIdioma(idioma);
    this->data.setData(data);
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
void EntidadeTermo::Criar_termo(string nome, string termo, string data){
    this->nome.setNome(nome);
    this->termo.setTermo(termo);
    this->data.setData(data);
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
void Definicao::Criar_definicao(string texto, string data){
    this->texto.setTexto(texto);
    this->data.setData(data);
}
//*****************************************************************************
//*****************************************************************************


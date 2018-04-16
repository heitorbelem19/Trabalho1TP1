#ifndef _ENTIDADES_H_INCLUDED
#define _ENTIDADES_H_INCLUDED
#include "dominio.h"
#include <iostream>
#include <string.h>
#include<cctype>

/**
 *  Uma classe Leitor que utiliza dos possui um nome,sobrenome,senha,email.
 */
class Leitor{
private:
    Nome nome;
    Sobrenome sobrenome;
    Senha senha;
    Email email;
    bool CheckSubstring(string firstString,string secondString);
public:
    Leitor();
    bool Criar_leitor(string nome,string sobrenome,string email, string senha);
};


/**
 *  Igual a classe Leitor porem possui um dominio data a mais
 */
class Desenvolvedor:public Leitor{
private:
    Data data;
public:
    Desenvolvedor();
    bool Criar_desenvolvedor(string nome,string sobrenome,string email, string senha, string data);
};


/**
 *  Igual a classe desenvolvedor porem possui os dominios telefone e endereco a mais
 */
class Administrador:public Desenvolvedor{
private:
        Telefone telefone;
        Endereco endereco;
public:
    Administrador();
    bool Criar_administrador(string nome,string sobrenome,string email, string senha, string data, string telefone, string endereco);

};


/**
 *  Uma classe vocabulario que possui os dominios Nome Idioma e Data.
 */
class Vocabulario{
private:
    Nome nome;
    Idioma idioma;
    Data data;
public:
    Vocabulario();
    bool Criar_vocabulario(string nome, string idioma, string data);
};


/**
 *  Uma classe EntidadedeTermo que  possui um Nome,Termo e Data.
 */
class EntidadeTermo{
private:
    Nome nome;
    Termo termo;
    Data data;
public:
    EntidadeTermo();
    bool Criar_termo(string nome,string termo, string data);
};


/**
 *  Uma classe Definicao que  possui um Texto e uma Data.
 */
class Definicao{
private:
    Texto texto;
    Data data;
public:
    Definicao();
    bool Criar_definicao(string texto, string data);
};


#endif // _ENTIDADES_H_INCLUDED

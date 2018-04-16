#ifndef _DOMINIO_H_INCLUDED
#define _DOMINIO_H_INCLUDED
#include <iostream>
#include <string.h>
#include<cctype>
using namespace std;

/**
 * Definicao da classe nome que sera utilizada pelas entidades
 */
class Nome{
private:
    string name;
    bool validar(string nome);
public:
    Nome(){};
    Nome(string nome){setNome(nome);}
    ~Nome(){};
    inline bool setNome(string nome){
        if(validar(nome)){
            this->name = nome;
            return true;
        }
        else
            return false;
    }
    inline string getNome(){return name;}
};

/**
 * Definicao da classe sobrenome que é identica a da classe nome
 */
class Sobrenome{
private:
	string last_name;
	bool validar(string sobrenome);
public:
    Sobrenome(){};
    Sobrenome(string sobrenome){setSobrenome(sobrenome);}
    ~Sobrenome(){};
	inline bool setSobrenome(string sobrenome){
        if(validar(sobrenome)){
            this->last_name = sobrenome;
            return true;
        }
        else
            return false;
    }
	inline string getSobrenome(){return last_name;}
};

/**
 * Definicao da classe Telefone que sera utilizada pelas entidades
 */
class Telefone{
private:
	string telephone;
	bool validar(string telefone);
public:
    Telefone(){};
    Telefone(string telefone){setTelefone(telefone);}
    ~Telefone(){};
	inline bool setTelefone(string telefone){
        if(validar(telefone)){
            this->telephone = telefone;
            return true;
        }
        else
            return false;
	}
	inline string getTelefone(){return telephone;}
};

/**
 * Definicao da classe Endereco que sera utilizada pelas entidades
 */
class Endereco{
private:
	string address;
	bool validar(string endereco);
public:
    Endereco(){};
    Endereco(string endereco){setEndereco(endereco);}
    ~Endereco(){};
	inline bool setEndereco(string endereco){
        if(validar(endereco)){
            this->address = endereco;
            return true;
        }
        return false;
	}
	inline string getEndereco(){return address;}
};

/**
 * Definicao da classe Data que sera utilizada pelas entidades
 */
class Data{
private:
	string date;
	bool validar(string data);
public:
    Data(){};
    Data(string data){setData(data);}
    ~Data(){};
	inline bool setData(string data){
        if(validar(data)){
            this->date = data;
            return true;
        }
        return false;
	}
	inline string getData(){return date;}
};

/**
 * Definicao da classe Email que sera utilizada pelas entidades
 */
class Email{
private:
    string email_address;
    bool validar(string email);
public:
    Email(){};
    Email(string email){setEmail(email);}
    ~Email(){};
    inline bool setEmail(string email){
        if(validar(email)){
            this->email_address = email;
            return true;
        }
        return false;
    }
    inline string getEmail(){return email_address;}
};

/**
 * Definicao da classe Senha que sera utilizada pelas entidades
 */
class Senha{
private:
    string password;
    bool validar(string senha);
public:
    Senha(){};
    Senha(string senha){setSenha(senha);}
    ~Senha(){};
    inline bool setSenha(string senha){
        if(validar(senha)){
            this->password = senha;
            return true;
        }
        else
            return false;
    }
    inline string getSenha(){return password;}
};

/**
 * Definicao da classe Texto que sera utilizada pelas entidades
 */
class Texto{
private:
	string text;
	bool validar(string texto);
public:
    Texto(){};
    Texto(string texto){setTexto(texto);}
    ~Texto(){};
	inline bool setTexto(string texto){
        if(validar(texto)){
            this->text = texto;
            return true;
        }
        return false;
	}
	inline string getTexto(){return text;}
};

/**
 * Definicao da classe Idioma que sera utilizada pelas entidades
 */
class Idioma{
private:
	string language;
	bool validar(string idioma);
public:
    Idioma(){};
    Idioma(string idioma){setIdioma(idioma);}
    ~Idioma(){};
	inline bool setIdioma(string idioma){
        if(validar(idioma)){
            this->language = idioma;
            return true;
        }
        return false;
    }
	inline string getIdioma(){return language;}
};

/**
 * Definicao da classe Termo que sera utilizada pelas entidades
 */
class Termo{
private:
    string term;
    bool validar(string termo);
public:
    Termo(){};
    Termo(string termo){setTermo(termo);}
    ~Termo(){};
    inline bool setTermo(string termo){
        if(validar(termo)){
            this->term = termo;
            return true;
        }
        return false;
    }
    inline string getTermo(){return term;}
};

#endif // _DOMINIO_H_INCLUDED


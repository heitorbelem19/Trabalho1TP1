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
    void validar(string nome);
public:
    Nome(){};
    Nome(string nome){setNome(nome);}
    ~Nome(){};
    inline void setNome(string nome){
        validar(nome);
        this->name = nome;
    }
    inline string getNome(){return name;}
};

/**
 * Definicao da classe sobrenome que é identica a da classe nome
 */
class Sobrenome{
private:
	string last_name;
	void validar(string sobrenome);
public:
    Sobrenome(){};
    Sobrenome(string sobrenome){setSobrenome(sobrenome);}
    ~Sobrenome(){};
	inline void setSobrenome(string sobrenome){
        validar(sobrenome);
        this->last_name = sobrenome;
    }
	inline string getSobrenome(){return last_name;}
};

/**
 * Definicao da classe Telefone que sera utilizada pelas entidades
 */
class Telefone{
private:
	string telephone;
	void validar(string telefone);
public:
    Telefone(){};
    Telefone(string telefone){setTelefone(telefone);}
    ~Telefone(){};
	inline void setTelefone(string telefone){
        validar(telefone);
            this->telephone = telefone;
	}
	inline string getTelefone(){return telephone;}
};

/**
 * Definicao da classe Endereco que sera utilizada pelas entidades
 */
class Endereco{
private:
	string address;
	void validar(string endereco);
public:
    Endereco(){};
    Endereco(string endereco){setEndereco(endereco);}
    ~Endereco(){};
	inline void setEndereco(string endereco){
        validar(endereco);
        this->address = endereco;
	}
	inline string getEndereco(){return address;}
};

/**
 * Definicao da classe Data que sera utilizada pelas entidades
 */
class Data{
private:
	string date;
	void validar(string data);
public:
    Data(){};
    Data(string data){setData(data);}
    ~Data(){};
	inline void setData(string data){
        validar(data);
        this->date = data;
	}
	inline string getData(){return date;}
};

/**
 * Definicao da classe Email que sera utilizada pelas entidades
 */
class Email{
private:
    string email_address;
    void validar(string email);
public:
    Email(){};
    Email(string email){setEmail(email);}
    ~Email(){};
    inline void setEmail(string email){
        validar(email);
        this->email_address = email;
    }
    inline string getEmail(){return email_address;}
};

/**
 * Definicao da classe Senha que sera utilizada pelas entidades
 */
class Senha{
private:
    string password;
   void validar(string senha);
public:
    Senha(){};
    Senha(string senha){setSenha(senha);}
    ~Senha(){};
    inline void setSenha(string senha){
        validar(senha);
        this->password = senha;
    }
    inline string getSenha(){return password;}
};

/**
 * Definicao da classe Texto que sera utilizada pelas entidades
 */
class Texto{
private:
	string text;
	void validar(string texto);
public:
    Texto(){};
    Texto(string texto){setTexto(texto);}
    ~Texto(){};
	inline void setTexto(string texto){
        validar(texto);
        this->text = texto;
	}
	inline string getTexto(){return text;}
};

/**
 * Definicao da classe Idioma que sera utilizada pelas entidades
 */
class Idioma{
private:
	string language;
	void validar(string idioma);
public:
    Idioma(){};
    Idioma(string idioma){setIdioma(idioma);}
    ~Idioma(){};
	inline void setIdioma(string idioma){
        validar(idioma);
        this->language = idioma;
    }
	inline string getIdioma(){return language;}
};

/**
 * Definicao da classe Termo que sera utilizada pelas entidades
 */
class Termo{
private:
    string term;
    void validar(string termo);
public:
    Termo(){};
    Termo(string termo){setTermo(termo);}
    ~Termo(){};
    inline void setTermo(string termo){
        validar(termo);
        this->term = termo;
    }
    inline string getTermo(){return term;}
};

#endif // _DOMINIO_H_INCLUDED

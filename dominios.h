#ifndef _DOMINIO_H_INCLUDED
#define _DOMINIO_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;

class Nome{
private:
    string name;
    void validar(string nome)throw (invalid_argument);
public:
    Nome();
    Nome(string nome){setNome(nome);}
    ~Nome(){};
    inline void setNome(string nome)throw (invalid_argument){
        validar(nome);
        this->name = nome;
    }
    inline string getNome(){return name;}
};

class Sobrenome{
private:
	string last_name;
	void validar(string sobrenome)throw (invalid_argument);
public:
    Sobrenome();
    Sobrenome(string sobrenome){setSobrenome(sobrenome);}
    ~Sobrenome(){};
	inline void setSobrenome(string sobrenome)throw (invalid_argument){
        validar(sobrenome);
        this->last_name = sobrenome;
    }
	inline string getSobrenome(){return last_name;}
};

class Telefone{
private:
	string telephone;
	void validar(string telefone)throw (invalid_argument);
public:
    Telefone();
    Telefone(string telefone){setTelefone(telefone);}
    ~Telefone(){};
	inline void setTelefone(string telefone)throw (invalid_argument){
        validar(telefone);
        this->telephone = telefone;
	}
	inline string getTelefone(){return telephone;}
};

class Endereco{
private:
	string address;
	void validar(string endereco)throw (invalid_argument);
public:
    Endereco();
    Endereco(string endereco){setEndereco(endereco);}
    ~Endereco(){};
	inline void setEndereco(string endereco)throw (invalid_argument){
        validar(endereco);
        this->address = endereco;
	}
	inline string getEndereco(){return address;}
};

class Data{
private:
	string date;
	void validar(string data)throw (invalid_argument);
public:
    Data();
    Data(string data){setData(data);}
    ~Data(){};
	inline void setData(string data)throw(invalid_argument){
        validar(data);
        this->date = data;
	}
	inline string getData(){return date;}
};

class Email{
private:
    string email_address;
    void validar(string email) throw(invalid_argument);
public:
    Email();
    Email(string email){setEmail(email);}
    ~Email(){};
    inline void setEmail(string email)throw(invalid_argument){
        validar(email);
        this->email_address = email;
    }
    inline string getEmail(){return email_address;}
};

class Senha{
private:
    string password;
    void validar(string senha) throw (invalid_argument);
public:
    Senha();
    Senha(string senha){setSenha(senha);}
    ~Senha(){};
    inline void setSenha(string senha)throw (invalid_argument){
        validar(senha);
        this->password = senha;
    }
    inline string getSenha(){return password;}
};

class Texto{
private:
	string text;
	void validar(string texto)throw (invalid_argument);
public:
    Texto();
    Texto(string texto){setTexto(texto);}
    ~Texto(){};
	inline void setTexto(string texto)throw (invalid_argument){
        validar(texto);
        this->text = texto;
	}
	inline string getTexto(){return text;}
};


class Idioma{
private:
	string language;
	void validar(string idioma)throw (invalid_argument);
public:
    Idioma();
    Idioma(string idioma){setIdioma(idioma);}
    ~Idioma(){};
	inline void setIdioma(string idioma)throw (invalid_argument){
        validar(idioma);
        this->language = idioma;
	}
	inline string getIdioma(){return language;}
};


class Termo{
private:
    string term;
    void validar(string termo) throw (invalid_argument);
public:
    Termo();
    Termo(string termo){setTermo(termo);}
    ~Termo(){};
    inline void setTermo(string termo)throw (invalid_argument){
        validar(termo);
        this->term = termo;
    }
    inline string getTermo(){return term;}
};

#endif // _DOMINIO_H_INCLUDED

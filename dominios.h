#ifndef _DOMINIO_H_INCLUDED
#define _DOMINIO_H_INCLUDED
#include <bits/stdc++.h>

using namespace std;

class Nome{
private:
    string nome;
    void validar(string nome)throw (invalid_argument);
public:
    void setNome(string nome)throw (invalid_argument);
    string getNome();
};

class Sobrenome{
private:
	string sobrenome;
	void validar(string sobrenome)throw (invalid_argument);
public:
	void setSobrenome(string sobrenome)throw (invalid_argument);
	string getSobrenome();
};

class Telefone{
private:
	string telefone;
	void validar(string telefone)throw (invalid_argument);
public:
	void setTelefone(string telefone)throw (invalid_argument);
	string getTelefone();
};

class Endereco{
private:
	string endereco;
	void validar(string endereco)throw (invalid_argument);
public:
	void setEndereco(string endereco)throw (invalid_argument);
	string getEndereco();
};

class Data{
private:
	string data;
	void validar(string data)throw (invalid_argument);
public:
	void setData(string data)throw (invalid_argument);
	string getData();
};

class Email{
private:
    string email;
    void validar(string email) throw(invalid_argument);
public:
    void setEmail(string email)throw(invalid_argument);
    string getEmail();

};

class Senha{
private:
    string senha;
    void validar(string senha) throw (invalid_argument);
public:
    void setSenha(string senha)throw (invalid_argument)
    string getSenha();
};

class Texto{
private:
	string texto;
	void validar(string texto)throw (invalid_argument);
public:
	void setTexto(string texto)throw (invalid_argument);
	string getTexto();
};

class Idioma{
private:
	string idioma;
	void validar()throw (invalid_argument);
public:
	void setIdioma(string idioma)throw (invalid_argument);
	string getIdioma();
};

#endif // _DOMINIO_H_INCLUDED

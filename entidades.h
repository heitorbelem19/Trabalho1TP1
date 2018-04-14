#ifndef _ENTIDADES_H_INCLUDED
#define _ENTIDADES_H_INCLUDED
#include "dominios.h"
#include <bits/stdc++.h>

class Leitor{
private:
    Nome nome;
    Sobrenome sobrenome;
    Email email;
    Senha senha;
public:
    Leitor(string nome,string sobrenome,string email,string senha);
    Leitor();
    ~Leitor();
};

#endif // _ENTIDADES_H_INCLUDED


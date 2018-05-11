#include "dominio.h"
#include <iostream>
#include <string.h>
#include<cctype>


//Métodos da Classe Nome

void Nome::validar(string nome){
    int indice = 1;
    if(islower(nome[0])){
        throw 1;
    }
    if(nome.length() > 20){
        throw 2;
    }
    while(nome[indice] != '\0'){
        if(islower(nome[indice]) && isalpha(nome[indice]))
            indice++;
        else{
            throw 3;
        }
    }
}
//--------------------------------------------------------------------


//Métodos da Classe Sobrenome

void Sobrenome::validar(string sobrenome){
    int indice = 1;
    if(islower(sobrenome[0])){
        throw 1;
    }
    if(sobrenome.length() > 20){
        throw 2;
    }
    while(sobrenome[indice] != '\0'){
        if(islower(sobrenome[indice]) && isalpha(sobrenome[indice]))
            indice++;
        else{
            throw 3;
        }
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Telefone

void Telefone::validar(string telefone){
    for(unsigned int indice = 0; indice < telefone.length() - 1; indice++){
        if(indice == 0 || indice == 1){
            if(!isdigit(telefone[indice])){
                throw 1;
            }
        }
        else if (indice == 2){
            if(!isspace(telefone[indice])){
                throw 2;
            }
        }
        else if (indice == 7){
            if(telefone[indice] != '-'){
                throw 3;
            }
        }
        else{
            if(!isdigit(telefone[indice])){
                throw 4;
            }
        }
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Endereço

void Endereco::validar(string endereco){
    if(endereco.length() > 20){
        throw 1;
    }
    if(isspace(endereco[0]) || isspace(endereco[endereco.length()-1])){
        throw 2;
    }
    for(int indice = 0; indice < endereco.length(); indice++){
        if(isspace(endereco[indice]) && isspace(endereco[indice + 1])){
            throw 3;
        }
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Data

void Data::validar(string data) {
    int dia, mes, ano;
    bool bissexto;
    for(int indice = 0; indice < data.length()-1;indice++){
        if(indice == 2 || indice == 5){
            if(data[indice] != '/'){
                throw 1;
            }
        }
        else{
            if(!isdigit(data[indice])){
                throw 2;
            }
        }
    }
    if ( (data[0] >= '0' && data[0] <= '9') && (data[1] >= '0' && data[1] <= '9') ){
        dia  = ((data[0] - '0')* 10) + ((data[1] - '0'));
    }
    if ( (data[3] >= '0' && data[3] <= '9') && (data[4] >= '0' && data[4] <= '9') ){
        mes  = ((data[3] - '0')* 10) + ((data[4] - '0'));
    }
    if ( (data[6] >= '0' && data[6] <= '9') && (data[7] >= '0' && data[7] <= '9') && (data[8] >= '0' && data[8] <= '9') && (data[9] >= '0' && data[9] <= '9')  ){
        ano  = ((data[6] - '0')* 1000) + ((data[7] - '0') * 100) + ((data[8] - '0')*10) + (data[9]-'0');
    }
    if (dia == 0){
        throw 3;
    }

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if(dia > 31){
            throw 4;
        }
    }
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if (dia > 30){
            throw 5;
        }
    }
    else if(mes == 2){
        if(ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)){
            bissexto = true;
        }
        if(bissexto){
            if(dia > 29){
                throw 6;
            }
        }
        else{
            if(dia > 28){
                throw 7;
            }
        }
    }
    else{
        throw 8;
    }
    if(ano < 1900 || ano > 2099){
        throw 9;
    }
}
//-----------------------------------------------------------


//Metodos de classe para o correio eletronico

void Email::validar(string email){
    int indice2 = email.find('@',0);
    if(indice2 == -1){
        throw  1;
    }
    bool letra = false;
    //nao pode conter pontos no comeco ou no final
    if(email[0] == '.' || email[indice2 - 1] == '.'){
        throw  2;
    }
    //nao pode conter hifen no comeco nem final do dominio
    if(email[indice2+1] == '-' || email[email.length()-1] == '-'){
        throw  3;
    }
    //Nao pode conter só numeros
    for(int indice = indice2 + 1; indice < email.length() ;indice++){
        if(isalpha(email[indice]))
                letra = true;
        if(!isalpha(email[indice]) && !isdigit(email[indice]) && email[indice]!='.'){
            throw  4;
        }
    }
    if (letra == false){
        throw  5;
    }
}
//-------------------------------------------------------------------------


//Métodos da Classe Senha

void Senha::validar(string senha){
    bool maiuscula = false,minuscula = false,numero = false;
    if(senha.length() != 8 ){
        throw 1;
    }
    for(int indice = 0; indice < senha.length() - 1; indice++){
        if (!isalpha(senha[indice]) && !isdigit(senha[indice])){
            throw 2;
        }
        if(islower(senha[indice])){
            minuscula = true;
        }
        else if(isupper(senha[indice])){
            maiuscula = true;
        }
        else if(isdigit(senha[indice])){
            numero = true;
        }
    }
    if(!numero || !minuscula || !maiuscula){
        throw 3;
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Texto

void Texto::validar(string texto){
    if(texto.length() > 30){
        throw 1;
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Idioma


void Idioma::validar(string idioma){
    if(idioma != "ENG" && idioma != "FRA" && idioma != "GER" && idioma != "ITA" && idioma != "POR" && idioma != "SPA"){
        throw 1;
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Termos

void Termo::validar(string termo){
    if(termo != "PT" && termo != "NP"){
        throw 1;
    }
}
//----------------------------------------------------------------------

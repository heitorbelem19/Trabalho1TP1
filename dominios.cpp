#include "dominios.h"
#include <bits/stdc++.h>
using namespace std;

//Métodos da Classe Nome

void Nome::validar(string nome)throw (invalid_argument){
    int indice = 1;
    if(islower(nome[0]))
        throw invalid_argument ("Primeira letra deve ser Maiuscula!\n");
    if(nome.length() > 20)
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
void Sobrenome::validar(string sobrenome)throw (invalid_argument){
    int indice = 1;
    if(islower(sobrenome[0]))
        throw invalid_argument ("Primeira letra deve ser Maiuscula!\n");

    if(sobrenome.length() > 20)
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
void Telefone::validar(string telefone)throw (invalid_argument){
    for(int indice = 0; indice < telefone.length() - 1; indice++){
        if(indice == 0 || indice == 1){
            if(!isdigit(telefone[indice])){
                throw invalid_argument ("DDD nao pode conter caracteres que nao sejam numeros\n");
            }
        }
         else if (indice == 2){
            if(!isspace(telefone[indice])){
                throw invalid_argument ("Numero de telefone invalido 1\n");
            }
        }
        else if (indice == 7){
            if(telefone[indice] != '-'){
                throw invalid_argument ("Numero de telefone invalido 1\n");
            }
        }
        else{
            if(!isdigit(telefone[indice])){
                throw invalid_argument ("Numero de telefone invalido 1\n");
            }
        }
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Endereço
void Endereco::validar(string endereco)throw (invalid_argument){
    if(endereco.length() > 20)
        throw invalid_argument ("Endereco ultrapassa limite permitido\n");
    if(isspace(endereco[0]) || isspace(endereco[endereco.length()-1]))
        throw invalid_argument ("Nao pode haver espacos em branco no comeco ou no fim do campo Endereco\n");
    for(int indice = 0; indice < endereco.length(); indice++){
        if(isspace(endereco[indice]) && isspace(endereco[indice + 1]))
            throw invalid_argument ("Nao pode haver espacos em branco seguidos\n");
    }
}
//------------------------------------------------------------------------

//Métodos da Classe Data
void Data::validar(string data) throw(invalid_argument){
    int dia, mes, ano;
    bool bissexto;
    for(int indice = 0; indice < data.length()-1;indice++){
        if(indice == 2 || indice == 5){
            if(data[indice] != '/'){
                throw invalid_argument("Formato errado de data\n");
            }
        }
        else{
            if(!isdigit(data[indice])){
                throw invalid_argument("Formato invalido para os D,M,A\n");
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
        throw invalid_argument("Dia 0 nao existe\n");
    }

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if(dia > 31){
            throw invalid_argument("Mes com no maximo 31 dias\n");
        }
    }
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if (dia > 30){
            throw invalid_argument("Mes com no maximo 30 dias\n");
        }
    }
    else if(mes == 2){
        if(ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)){
            bissexto = true;
        }
        if(bissexto){
            if(dia > 29){
                throw invalid_argument("Dia inexistente\n");
            }
        }
        else{
            if(dia > 28){
                throw invalid_argument("Dia inexistente\n");
            }
        }
    }
    else{
        throw invalid_argument ("Mes inexistente\n");
    }

    if(ano < 1900 || ano > 2099)
        throw invalid_argument("Ano fora dos parametros\n");

}
//-----------------------------------------------------------

//Metodos de classe para o correio eletronico
void Email::validar(string email)throw (invalid_argument){
        int indice2 = email.find('@',0);
        if(indice2 == -1)
            throw  invalid_argument("Deve conter arroba");
        //cout << indice2;
        bool letra = false;
//nao pode conter pontos no comeco ou no final

        if(email[0] == '.' || email[indice2 - 1] == '.')

            throw  invalid_argument("Nao pode existir espaco no comeco ou no final da parte local");

//nao pode conter hifen no comeco nem final do dominio

        if(email[indice2+1] == '-' || email[email.length()-1] == '-')

            throw  invalid_argument("Nao pode conter hifens nesses lugares");


//Nao pode conter só numeros
        for(int indice = indice2 + 1; indice < email.length() ;indice++){
            if(isalpha(email[indice]))
                letra = true;
            if(!isalpha(email[indice]) && !isdigit(email[indice]) && email[indice]!='.')
                throw  invalid_argument("O dominio nao pode conter caracteres especiais");
}
        if (letra == false)

            throw  invalid_argument("o dominio nao pode ser so de numeros");
}
//-------------------------------------------------------------------------

//Métodos da Classe Senha
void Senha::validar(string senha)throw (invalid_argument){
    bool maiuscula = false,minuscula = false,numero = false;
    if(senha.length() != 8)
    throw invalid_argument ("A senha deve conter exatamente 8 caracteres");

    for(int indice = 0; indice < senha.length() - 1; indice++){

        if (!isalpha(senha[indice]) && !isdigit(senha[indice]))
            throw invalid_argument ("A senha nao pode conter caracteres especiais");

        if(islower(senha[indice]))
            minuscula = true;
        else if(isupper(senha[indice]))
            maiuscula = true;
        else if(isdigit(senha[indice]))
            numero = true;
    }
        if(!numero || !minuscula || !maiuscula)
            throw invalid_argument ("A senha deve contar pelo menos uma letra maiúscula,uma minúscula e um digito");

}
    //if(nome.find(senha) != std::npos)
       // throw "A senha nao pode conter o nome do usuario"
//------------------------------------------------------------------------

//Métodos da Classe Texto
void Texto::validar(string texto)throw (invalid_argument){
    if(texto.length() > 30 || texto.length() == 0)
        throw invalid_argument ("Texto maior que o limite permitido\n");
}
//------------------------------------------------------------------------

//Métodos da Classe Idioma
void Idioma::validar(string idioma) throw(invalid_argument){
    if(idioma != "ENG" && idioma != "FRA" && idioma != "GER" && idioma != "ITA" && idioma != "POR" && idioma != "SPA"){
        throw invalid_argument("Idioma selecionado nao existe\n");
    }
}
//------------------------------------------------------------------------

//Métodos da Classe Termos
void Termo::validar(string termo)throw(invalid_argument){
    if(termo != "PT" && termo != "NP"){
        throw invalid_argument("Termo selecionado nao existe\n");
    }
}
//----------------------------------------------------------------------

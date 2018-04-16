#include "dominio.h"
#include <iostream>
#include <string.h>
#include<cctype>
using namespace std;


//Métodos da Classe Nome
/**
 * A funcao de validar o nome verifica se ela possui letra maiuscula no comeco
 * e em qualquer outra posiçao alem de ver se ultrapassa o limite de caracteres
 * @param nome eh a palavra que se deseja validar
 * @return retorna se o nome indicado eh valido
 */
bool Nome::validar(string nome){
    try{
        int indice = 1;
        if(islower(nome[0]))
            throw 1;
        if(nome.length() > 20)
            throw 2;
        while(nome[indice] != '\0'){
            if(islower(nome[indice]) && isalpha(nome[indice]))
                indice++;
            else
                throw 3;
        }
        return true;
    }
    catch(int x){
        if (x == 1)
            cout << "FALHA NOME: Primeira letra deve ser Maiuscula!\n" << endl;
        else if(x == 2)
            cout << "FALHA NOME: Nome ultrapassa limite permitido\n" << endl;
        else if(x == 3)
            cout << "FALHA NOME: Nao pode possuir mais de uma letra maiuscula ou caracteres especiais!\n" << endl;
        return false;
    }
}
//--------------------------------------------------------------------


//Métodos da Classe Sobrenome
/**
 * Eh estruturado da mesma forma que a funcao de validar nome
 * @return retorna se o sobrenome indicado eh valido
 */
bool Sobrenome::validar(string sobrenome){
    try{
        int indice = 1;
        if(islower(sobrenome[0]))
            throw 1;

        if(sobrenome.length() > 20)
            throw 2;

        while(sobrenome[indice] != '\0'){
            if(islower(sobrenome[indice]) && isalpha(sobrenome[indice]))
                indice++;
            else
                throw 3;
        }
        return true;
    }
    catch(int x){
        if(x==1)
            cout << "FALHA SOBRENOME: Primeira letra deve ser Maiuscula!\n " << endl;
        else if(x==2)
            cout << "FALHA SOBRENOME: Sobrenome ultrapassa limite permitido\n" << endl;
        else
            cout << "FALHA SOBRENOME: Nao pode possuir mais de uma letra maiuscula ou caracteres especiais!\n" <<endl;
        return false;
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Telefone
/**
 * A funcao de validar o telefone verifica se possui a formatacao correta, alem de
 *possuir somente digitos e respeitar o limite normal de um numero
 * @param telefone eh a palavra que se deseja validar
 * @return retorna se o telefone indicado eh valido
 */
bool Telefone::validar(string telefone){
    try{
        for(int indice = 0; indice < telefone.length() - 1; indice++){
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
        return true;
    }
    catch(int x){
        cout << "FALHA TELEFONE: Numero de telefone invalido\n" << endl;
        return false;
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Endereço
/**
 * A funcao de validar o endereco verifica se ele possui o limite de caracteres
 * e se ha espacoes em branco no comeco, no final ou seguidos
 * @param endereco  palavra que se deseja validar
 * @return retorna se o endereco indicado eh valido
 */
bool Endereco::validar(string endereco){
    try{
        if(endereco.length() > 20)
            throw 1;
        if(isspace(endereco[0]) || isspace(endereco[endereco.length()-1]))
            throw 2;
        for(int indice = 0; indice < endereco.length(); indice++){
            if(isspace(endereco[indice]) && isspace(endereco[indice + 1]))
                throw 3;
        }
        return true;
    }
    catch(int x){
        if(x == 1)
            cout << "FALHA ENDERECO: Endereco ultrapassa limite permitido\n" << endl;
        else if(x == 2)
            cout << "FALHA ENDERECO: Nao pode haver espacos em branco no comeco ou no fim do campo Endereco\n" << endl;
        else if(x == 3)
            cout << "FALHA ENDERECO: Nao pode haver espacos em branco seguidos\n" << endl;
        return false;
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Data
/**
 * A funcao de validar a data  verifica se ela possui a formatacao correta
 * e respeita os limites de dias que os meses possuem.Inclusive no ano bisexto
 * @param data eh a palavra que se deseja validar
 * @return retorna se a data indicada eh valida
 */
bool Data::validar(string data) {
    try{
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

        if(ano < 1900 || ano > 2099)
            throw 9;

        return true;
    }
    catch (int x){
        if (x == 1)
            cout << "FALHA DATA: Formato errado de data\n" << endl;
        else if(x == 2)
            cout << "FALHA DATA: Formato invalido para os D,M,A\n\n" << endl;
        else if(x == 3)
            cout << "FALHA DATA: Dia 0 nao existe\n" << endl;
        else if(x == 4)
            cout << "FALHA DATA: Mes com no maximo 31 dias\n" << endl;
        else if(x == 5)
            cout << "FALHA DATA: Mes com no maximo 30 dias\n" << endl;
        else if(x == 6)
            cout << "FALHA DATA: Dia inexistente\n" << endl;
        else if(x == 7)
            cout << "FALHA DATA: Dia inexistente\n" << endl;
        else if(x == 8)
            cout << "FALHA DATA: Mes inexistente\n" << endl;
        else if(x == 8)
            cout << "FALHA DATA: Ano fora dos parametros\n" << endl;
        return false;
    }
}
//-----------------------------------------------------------


//Metodos de classe para o correio eletronico
/**
 * Composto por parte local e domínio separados por arroba. A parte local
 *pode conter letras (A – Z a – z), dígitos (0 – 9) e caracteres especiais.
 *Pode conter ponto (.) desde que não
 *seja o primeiro ou o último caracter. O domínio pode conter letras
 *(A – Z a – z); dígitos (0 – 9), desde que o domínio não seja só
 *numérico; – (hífen), desde que não seja o primeiro ou o último
 *caracter.

 * @param email eh a palavra que se deseja validar
 * @return retorna se o email indicado eh valido
 */
bool Email::validar(string email){
    try{
        int indice2 = email.find('@',0);
        if(indice2 == -1)
            throw  1;
        bool letra = false;
    //nao pode conter pontos no comeco ou no final
        if(email[0] == '.' || email[indice2 - 1] == '.')
            throw  2;
    //nao pode conter hifen no comeco nem final do dominio
        if(email[indice2+1] == '-' || email[email.length()-1] == '-')
            throw  3;
    //Nao pode conter só numeros
        for(int indice = indice2 + 1; indice < email.length() ;indice++){
            if(isalpha(email[indice]))
                letra = true;
            if(!isalpha(email[indice]) && !isdigit(email[indice]) && email[indice]!='.')
                throw  4;
            }
        if (letra == false)
            throw  5;
        return true;
    }
    catch(int x){
        if (x == 1)
            cout << "FALHA EMAIL: Deve conter arroba\n" << endl;
        else if(x == 2)
            cout << "FALHA EMAIL: Nao pode existir espaco no comeco ou no final da parte local\n" << endl;
        else if(x == 3)
            cout << "FALHA EMAIL: Nao pode conter hifens nesses lugares\n" << endl;
        else if(x == 4)
            cout << "FALHA EMAIL: O dominio nao pode conter caracteres especiais" << endl;
        else if(x == 5)
            cout << "FALHA EMAIL: O dominio nao pode ser so de numeros" << endl;
        return false;
    }
}
//-------------------------------------------------------------------------


//Métodos da Classe Senha
/**
 *Contém oito caracteres, que podem ser letras (A – Z a – z) ou
 *dígitos (0 a 9). Cada senha precisa conter, pelo menos, uma letra
 *maiúscula, uma letra minúscula e um dígito.
 * @param senha eh a palavra que se deseja validar
 * @return retorna se a senha indicado eh valido
 */
bool Senha::validar(string senha){
    try{
        bool maiuscula = false,minuscula = false,numero = false;
        if(senha.length() != 8 )
            throw 1;
        for(int indice = 0; indice < senha.length() - 1; indice++){
            if (!isalpha(senha[indice]) && !isdigit(senha[indice]))
                throw 2;
            if(islower(senha[indice]))
                minuscula = true;
            else if(isupper(senha[indice]))
                maiuscula = true;
            else if(isdigit(senha[indice]))
                numero = true;
        }
        if(!numero || !minuscula || !maiuscula)
            throw 3;

        return true;
    }
    catch(int x){
        if (x == 1)
            cout << "FALHA SENHA: A senha deve conter exatamente 8 caracteres\n" << endl;
        else if(x == 2)
            cout << "FALHA SENHA: A senha nao pode conter caracteres especiais\n" << endl;
        else if(x == 3)
            cout << "FALHA SENHA: A senha deve contar pelo menos uma letra maiúscula,uma minúscula e um digito\n" << endl;
        return false;
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Texto
/**
 * Contem de 1 a 30 caracteres
 * @param texto eh a palavra que se deseja validar
 * @return retorna se o textoindicado eh valido
 */
bool Texto::validar(string texto){
    try{
        if(texto.length() > 30)
            throw 1;
        return true;
    }
    catch(int x){
        cout << "FALHA TEXTO: Texto maior que o limite permitido\n" << endl;
        return false;
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Idioma
/**
 *Contém oito caracteres, que podem ser letras (A – Z a – z) ou
 *dígitos (0 a 9). Cada senha precisa conter, pelo menos, uma letra
 *maiúscula, uma letra minúscula e um dígito.
 * @param senha eh a palavra que se deseja validar
 * @return retorna se a senha indicado eh valido
 */
/**
 *Precisa ser um desses idiomas:ENG (inglês), FRA (francês), GER (alemão), ITA (italiano), POR
 *(português) e SPA (espanhol).
 * @param idioma eh a palavra que se deseja validar
 * @return retorna se o idioma indicado eh valido
*/
bool Idioma::validar(string idioma){
    try{
        if(idioma != "ENG" && idioma != "FRA" && idioma != "GER" && idioma != "ITA" && idioma != "POR" && idioma != "SPA"){
            throw 1;
        }
        return true;
    }
    catch(int x){
        cout << "FALHA IDIOMA: Idioma selecionado nao existe\n" << endl;
        return false;
    }
}
//------------------------------------------------------------------------


//Métodos da Classe Termos
/**
 *Precisa ser PT (preferred term) ou NP (non preferred term)
 * @param termo eh a palavra que se deseja validar
 * @return retorna se o termo indicado eh valido
*/
bool Termo::validar(string termo){
    try{
        if(termo != "PT" && termo != "NP"){
            throw 1;
        }
        return true;
    }
    catch(int x){
        cout << "FALHA TERMO: Termo selecionado nao existe\n"<<endl;
        return false;
    }
}
//----------------------------------------------------------------------

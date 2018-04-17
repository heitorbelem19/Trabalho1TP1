#include "teste.h"
#include "dominio.h"
#include "entidades.h"
#include <iostream>
#include <string.h>
#include<cctype>

int main () {

  // Testes para as estruturas de dominio (um caso de falha e um de sucesso

  cout << "Testes dos dominios" << endl;
  cout << "----------------------------------------------------------------------------------\n "<< endl;

  TUNome n1;
  n1.runNome();

  TUSobrenome s1;
  s1.runSobrenome();

  TUTelefone t1;
  t1.runTelefone();

  TUEndereco e1;
  e1.runEndereco();

  TUData d1;
  d1.runData();

  TUEmail e2;
  e2.runEmail();

  TUSenha s2;
  s2.runSenha();

  TUTexto t2;
  t2.runTexto();

  TUIdioma i1;
  i1.runIdioma();

  TUTermo t3;
  t3.runTermo();

  //----------------------------------------------------------------------------------

  //Casos de teste para as entidades onde é mostrado o caso de sucesso
  cout << "Testes das entidades" << endl;
  cout << "----------------------------------------------------------------------------------\n "<< endl;
  TULeitor l1;
  l1.runLeitor();

  TUDev d2;
  d2.runDev();

  TUAdm a1;
  a1.runAdm();

  TUEntidadeTermo t4;
  t4.runEntidadeTermo();

  TUVocabulario v1;

  v1.runVocabulario();

  TUDefinicao def;

  def.runDefinicao();

  //Leitor leitor = Leitor();
  //leitor.Criar_leitor("HEitor","Lindo","felipeayres@gmail.com","His4efgt");
  //Desenvolvedor dev = Desenvolvedor();
  //dev.Criar_desenvolvedor(nome.getNome(),sobrenome.getSobrenome(),"felipeayres@gmail.com","Hgs4efgt",data.getData());
  //cout <<"funcionou"<< endl;

  return 0;
 }

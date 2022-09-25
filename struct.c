#include <stdio.h>

int main(){

  struct{
  char nome[40], email[30], tel[13];
  }
  Dados;
  int Digito1 = 0, Digito2 = 0, Digito3 = 0;
  
  printf ("Digite seu nome: \n");
  scanf("%s", Dados.nome);
  
  printf("Digite seu e-mail: \n");
  scanf("%s", Dados.email);
  
  printf("Digite seu telefone: \n");
  scanf("%s", Dados.tel);
  
  
  while (Dados.nome [Digito1] != '\0')
  {Digito1++;}
  printf("Nome: %d digitos \n", Digito1);
  
  while (Dados.email [Digito2] != '\0')
  {Digito2++;}
  printf("E-mail: %d digitos \n", Digito2);
  
  while (Dados.tel [Digito3] != '\0')
  {Digito3++;}
  printf("Telefone: %d digitos \n", Digito3);

  return 0;
}
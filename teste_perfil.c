#include <stdio.h>

int main()
{
    int dia, mes, ano, a, b, c;
    
    printf ("Digite seu Dia de Nascimento: \n");
    scanf ("%d", &dia );
    
    printf ("Digite seu Mês de Nascimento:\n");
    scanf ("%d", &mes);
    
    printf ("Digite seu Ano de Nascimento:\n");
    scanf ("%d", &ano);
    
    printf ("RESULTADO:");
    
    a = ((dia*100 + mes) + ano);
    b = (a/100) + (a % 100);
    c = b % 5;
    
    if(c == 0){
    printf("\n Você é Timido!");}
    
    if (c == 1){
    printf ("\n Você é Sonhador!");}
    
    if (c == 2){
    printf ("\n Você é Paquerador!");}
   
    if(c == 3){
    printf("\n Você é Atraente!");}
    
    if (c == 4){
    printf ("\n Você é Irresistivel!");}
    
    return 0;
    }
   



#include <stdio.h>

int main()
{
    int cont;
    
    printf ("Digite um número inteiro maior que 0: ");
    scanf ("%d", &cont);
    
    if (cont < 1){
        printf ("Numero invalido. O numero dever ser maior que 0");
    }
    
    for (cont = cont;cont >= 0; cont--){
        printf("%d\n", cont);
    }

    return 0;
}
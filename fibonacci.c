#include <stdio.h>


    int main()
{
    int i = 1, s = 1, x, num, cont = 1;

    printf ("\n Digite um numero maior ou igual a 3:  \t");
    scanf ("%d", &num);
    
    if (num < 3){
        printf("Numero invalido! O valor tem que ser maior ou igual a 3");
        
    }else{
    printf ("%d\n", i);
    printf ("%d\n", s);
   
     
    x = i + i;
    
    
        for(num = num - i; cont < num; cont++){
            printf ("%d \n", x);
          
            x = x + i;
            i = x - i;
        }
    }

    return 0;
}





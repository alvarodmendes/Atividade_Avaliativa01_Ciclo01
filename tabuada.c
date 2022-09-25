#include <stdio.h>
#include <stdlib.h>

int main ()

{

  int num, cont = 1;

  printf ("\n digite um numero: \t");
  scanf ("%d", &num);

  for (cont = 1; cont <= 10; cont++){   
      printf ("%d * %d = %d \n", num, cont, (num * cont));
    }
    printf("TABUADA \n");

  while (num > 1){
      num--;
  for (cont = 1; cont <= 10; cont++)
	printf ("%d * %d = %d \n", num, cont, (num * cont));
	printf("TABUADA \n");
    }


  return 0;
}


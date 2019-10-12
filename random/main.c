#include <stdio.h>
#include "random.h"

void stampa(int cinque, int min, int max);

int main()
{

  int min, max, cinque = 5;

  random_init();

  min = 1;
  max = 1;
  stampa(cinque, min, max);

  min = 1;
  max = 2;
  stampa(cinque, min, max);

  min = 1;
  max = 3;
  stampa(cinque, min, max);

  min = 100;
  max = 150;
  stampa(cinque, min, max);

  return 0;

}

void stampa(int cinque, int min, int max)
{

  int i;

  printf("\n%d numeri compresi tra %d e %d:\n", cinque, min, max);

  for (i = 0; i < cinque; i++) 
  {
    printf("%d\n", random_between(min, max));
  }

}

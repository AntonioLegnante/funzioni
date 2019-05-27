/* creare un programma che genere 3 numeri pari e 3 tre numeri dispari */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int generanum();

int main()
{
    int num, i;
    srand(time(NULL));
    for(i = 1; i <= 6; i++)    
    {
        num = generanum();
        printf("%d generazione : %d\n", i, num);
    }

    return 0;
}

int generanum()
{
    static int i = 0;
    int num, y = 0;
    i++;
   
    if(i > 3)    y = 1;

    num = rand() % 5;
    num *= 2;
 
    num += y;
    
    return num;

}
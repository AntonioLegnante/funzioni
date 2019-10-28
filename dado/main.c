#include "lancio.h"
#include <stdio.h>

void stampa(int occorrenze, int faccia);

int main()
{
    int i = 0, risultato_lancio, facce[] = {0, 0, 0, 0, 0, 0, 0};

    lancio_init();

    for(i = 0; i < 100; i++)
    {
        risultato_lancio = lancio_dado();
        facce[risultato_lancio]++;
    }

        for(i = 1; i < 7; i++)
        {
            stampa(facce[i], i);
        }

    return 0;

}

void stampa(int occorrenze, int faccia)
{
    int i;
    printf("%d #%d", faccia, occorrenze);
    for(i = 0; i < occorrenze; i++)    printf("*");
    puts("\n");
}
            



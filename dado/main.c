#include "lancio.h"
#include <stdio.h>

void stampa(int occorrenze, int faccia);

int main()
{
    int i = 0, risultato_lancio, facce[] = {0, 0, 0, 0, 0, 0};

    lancio_init();

    for(i = 0; i < 100; i++)
    {
        risultato_lancio = lancio_dado();
        switch(risultato_lancio)
        {
            case 1:    facce[0]++;
            break;
            case 2:    facce[1]++;
            break;
            case 3:    facce[2]++;
            break;
            case 4:    facce[3]++;
            break;
            case 5:    facce[4]++;
            break;
            case 6:    facce[5]++;
            break;
        }
    }

        for(i = 0; i < 6; i++)
        {
            stampa(facce[i], i);
        }

    return 0;

}

void stampa(int occorrenze, int faccia)
{
    int i;
    printf("%d #%d", faccia + 1, occorrenze);
    for(i = 0; i < occorrenze; i++)    printf("*");
    puts("\n");
}
            



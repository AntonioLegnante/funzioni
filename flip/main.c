#include <stdio.h>
#include "lancio.h"

int main()
{
    int i, head = 0, body = 0, risultato;

    lancio_init();
    for(i = 0; i < 100; i++)
    {
        risultato = lancio();

        if(risultato == 0)    head++;
        else    body++;
    }

    printf("numero di head %d \n numero di body %d", head, body);
    
    return 0;
}

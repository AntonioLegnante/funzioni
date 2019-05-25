/*conversione con funzione*/

#include <stdio.h>
void conversione(int n, int base);
void stampabit(int bit);


int main()
{
    int n, scelta, base;
    printf("inserisci un valore compreso tra 0 e 255\n");

    do{
        scanf("%d", &n);
    }while (n <=  0 || n > 255);

    printf("scegli il tipo di conversione che vuoi eseguire \n");
    printf("1 binario : 2 ottale : 3 esadecimale");
    scanf("%d", &scelta);
    switch(scelta)
    {
        case 1:
            conversione(n, 2);
        break;
        case 2:
            conversione(n, 8);
        break;
        case 3:
            conversione(n, 16);
        break;
        default:
            printf("sei ritardato");
        break;
    }

    return 0;
}

void conversione(int n, int base)
{
    int peso, bit, numerobit, i;
    switch(base)
    {
        case 2:
            peso = 128;
            numerobit = 8;
        break;
        case 8:
            peso = 64;
            numerobit = 3;
        break;
        case 16:
            peso = 16;
            numerobit = 2;
        break;
    }
            
    for(i = 0; i < numerobit; i++)
    {
        bit = n / peso;
        n -= bit * peso;
        peso /= base; 
        stampabit(bit);
    }
}


void stampabit(int bit)
{
        switch(bit)
        {
            case 10:
                putchar('A');
            break;
            case 11:
                putchar('B');
            break;
            case 12:
                putchar('C');
            break;
            case 13:
                putchar('D');
            break;
            case 14:
                putchar('E');
            break;
            case 15:
                putchar('F');
            break;
            default:
                printf("%d", bit);
            break;
        }
}

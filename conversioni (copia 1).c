/*conversione con funzione*/

#include <stdio.h>
void binario(int n);
void ottale(int n);
void esadecimale(int n);

int main()
{
    int n, scelta;
    printf("inserisci un valore compreso tra 0 e 255");

    do{
        scanf("%d", &n);
    }while (n <=  0 || n > 255);

    printf("scegli il tipo di conversione che vuoi eseguire\n");
    printf("1 binario : 2 ottale : 3 esadecimale");
    scanf("%d", &scelta);
    switch(scelta)
    {
        case 1:
            binario(n);
        break;
        case 2:
            ottale(n);
        break;
        case 3:
            esadecimale(n);
        break;
        default:
            ("sei ritardato");
        break;
    }

    return 0;
}

void binario(int n)
{
    int peso = 128, bit, i;

    for(i = 0; i < 8; i++)
    {
        bit = n / peso;
        printf("%d", bit);
        n -= bit * peso;
        peso /= 2; 
    }
}


void ottale(int n)
{
    int peso = 64, bit, i;
     
    for(i = 0; i < 3; i++)
    {
        bit = n / peso;
        printf("%d", bit);
        n -= bit * peso;
        peso /= 8;
    }

    
}


void esadecimale(int n)
{
    int peso = 16, i, bit;

    for(i = 0; i < 2; i++)
    {
        bit = n / peso;
        
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
    
        n -= bit * peso;
        peso /= 16;
   }
            
}
/*conversione con funzione*/

#include <stdio.h>
void conversione(int n, int base);


int main()
{
    int n, base;
    printf("inserisci un valore compreso tra 0 e 255");

    do{
        scanf("%d", &n);
    }while (n <=  0 || n > 255);

    printf("scegli il tipo di conversione che vuoi eseguire\n");
    printf("scegli la base");
    scanf("%d", &base);
    conversione(n, base);

    return 0;
}



void conversione(int n, int base)
{
    int peso, bit, i;
    switch(base)
    {
        case 2:
            peso = 128;
 
            for(i = 0; i < 8; i++)
            {
               bit = n / peso;
               printf("%d", bit);
               n -= bit * peso;
               peso /= 2;
            }

        break;
        case 8:
           peso = 64;

           for(i = 0; i < 3; i++)
           {
              bit = n / peso;
              printf("%d", bit);
              n -= bit * peso;
              peso /= 8; 
           }

        break;

        case 16:
            
           peso = 16;
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
            
        break;
        default:
            ("sei ritardato");
        break;
    }

}



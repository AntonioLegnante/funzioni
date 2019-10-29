#include <stdio.h>
#include "genera_numeri.h"

int main()
{
    int fattore1, fattore2, prodotto_candidato;

    printf("il candidato e' pregato di svolgere la seguente moltiplicazione\n");
    
    genera_numeri_init();
    fattore1 = genera_numeri_casuali();
    fattore2 = genera_numeri_casuali();

    printf("%d * %d\n", fattore1, fattore2);
    scanf("%d", &prodotto_candidato);

    if(fattore1 * fattore2 == prodotto_candidato)    genera_numeri_risposte_positive();
    else    genera_numeri_risposte_negative();
        
    return 0;
}

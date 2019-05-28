/*programma che inverte le cifre di un numero tramite una funzione*/

#include <stdio.h>

int costruisci(int numero);

int main()
{
    int numero, inverso;
    
    printf("inserisci il numero da invertire");
    scanf("%d", &numero);

    inverso = costruisci(numero);

    printf("il numero invertito e' : %d ", inverso);

    return 0;
}

int costruisci(int numero)
{
    int inverso = 0, cifra;

    while(numero > 0)
    {
        cifra = numero % 10;
        numero /= 10;
        inverso = inverso * 10 + cifra;
    }

     return inverso;
}
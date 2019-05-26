/*programma che inverte le cifre di un numero tramite una funzione*/

#include <stdio.h>
int costruisci(int numero, int cifra);

int main()
{
    int numero, cifra, inverso = 0, pesocifra;
    
    printf("inserisci il numero da invertire");
    scanf("%d", &numero);

    do{

        cifra = numero % 10;
        numero /= 10;
        pesocifra = costruisci(numero, cifra);
        inverso += pesocifra;

    }while(numero > 0);

    printf("il numero invertito e' : %d ", inverso);

    return 0;
}

int costruisci(int numero, int cifra)
{
    while(numero > 0)
    {
        numero /= 10;
        cifra *= 10;
    }

    return cifra;
}
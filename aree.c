/*stampa aree*/

#include <stdio.h>
#include <math.h>
void quadrato(double lato);
void cerchio(double raggio);
int main()
{
    double lato, raggio;
    int scelta;

    printf("scegli il calcolo dell'area");
    printf("1 quadrato, 2 cerchio");
    scanf("%d", &scelta);
    if(scelta == 1)
    {
        printf("inserisci il lato");
        scanf("%lf", &lato);
        quadrato(lato);
    }
    else 
    {
        printf("inserisci il raggio");
        scanf("%lf", &raggio);
        cerchio(raggio);
    }

    return 0;
}

void quadrato(double lato)
{
    printf("%f", lato * lato);
}

void cerchio(double raggio)
{
    printf("%f", pow(raggio, 2.) * 3,14);
}
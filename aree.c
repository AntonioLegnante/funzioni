/*stampa aree*/

#include <stdio.h>
#include <math.h>
double quadrato(double lato);
double cerchio(double raggio);
int main()
{
    double lato, raggio, area;
    int scelta;

    printf("scegli il calcolo dell'area\n");
    printf("1 quadrato, 2 cerchio\n");
    do {
        scanf("%d", &scelta);
    }while(scelta < 0 || scelta > 2);

        if(scelta == 1)
        {
            printf("inserisci il lato\n");
            do{
                scanf("%lf", &lato);
            }while(lato < 0);
            area = quadrato(lato);
            printf("l'aria del quadrato e' : %f", area);
        }
        else if(scelta == 2)
        {
            printf("inserisci il raggio\n");

            do{
                scanf("%lf", &raggio);
            }while(raggio < 0);

            area = cerchio(raggio);
            printf("l'aria del cerchio e' : %f", area);
        }

        return 0;
}

double quadrato(double lato)
{
    return lato * lato;
}

double cerchio(double raggio)
{
    return (raggio * raggio) * 3.14;
}
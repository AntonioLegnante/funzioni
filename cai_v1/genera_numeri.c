#include "random.h"
#include "genera_numeri.h"

void genera_numeri_init()
{
    random_init();
}

int genera_numeri_casuali()
{
    random_between(1, 10);
}

void genera_numeri_risposte_positive()
{
    int random;
    random = random_between(1, 5);
    switch(random)
    {
        case 1:    printf("Very Nice");
        break;
        case 2:    printf("Very Good");
        break;
        case 3:    printf("Excellent");
        break;
        case 4:    printf("Perfect");
        break;
        default:    printf("ERRORE");
        break;
    }
}

void genera_numeri_risposte_negative()
{
    int random;
    random = random_between(1, 5);
    switch(random)
    {
        case 1:    printf("No try again");
        break;
        case 2:    printf("don't good");
        break;
        case 3:    printf("try again");
        break;
        case 4:    printf("Very Bad");
        break;
        default:    printf("ERRORE");
        break;
    }
}

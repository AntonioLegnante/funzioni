/*calcolo di diverse ipotenuse*/

#include <stdio.h>
#include <math.h>

double pitagora(double cateto1, double cateto2);

int main()
{
    double cateto1, cateto2, ipotenusa;
    cateto1 = 3.; cateto2 = 4.; ipotenusa = pitagora(cateto1, cateto2);
    printf("triangolo 2) lato 1: %f lato 2: %f ipotenusa %f\n", cateto1, cateto2, ipotenusa);
    cateto1 = 5.; cateto2 = 12.; ipotenusa = pitagora(cateto1, cateto2);
    printf("triangolo 2) lato 1: %f lato 2: %f ipotenusa %f\n", cateto1, cateto2, ipotenusa);
    cateto1 = 8.; cateto2 = 15.; ipotenusa = pitagora(cateto1, cateto2);
    printf("triangolo 3) lato 1: %f lato 2: %f ipotenusa %f\n", cateto1, cateto2, ipotenusa);

    return 0;
}

double pitagora(double cateto1, double cateto2)
{
    return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}
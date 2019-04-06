/*calcolo di diverse ipotenuse*/

#include <stdio.h>
#include <math.h>

void ipotenusa(double cateto1, double cateto2);

int main()
{
    double cateto1, cateto2;
    cateto1 = 3.; cateto2 = 4.; ipotenusa(cateto1, cateto2);
    cateto1 = 5.; cateto2 = 12.; ipotenusa(cateto1, cateto2);
    cateto1 = 8.; cateto2 = 15.; ipotenusa(cateto1, cateto2);

    return 0;
}

void ipotenusa(double cateto1, double cateto2)
{
    printf("%f\n", sqrt(pow(cateto1, 2) + pow(cateto2, 2)));
}
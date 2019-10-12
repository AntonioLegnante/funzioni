#include "random.h"
#include "lancio.h"   

void lancio_init()
{
    random_init();
}

int lancio()
{
    return random_between(0,2);
}




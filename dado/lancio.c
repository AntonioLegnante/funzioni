#include "random.h"
#include "lancio.h"

void lancio_init()
{
    random_init();
}

int lancio_dado()
{
    return random_between(1,7);
}



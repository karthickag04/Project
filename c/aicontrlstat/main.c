#include <stdio.h>
#include <stdlib.h>
#include "elseifcontrol.c"
#include "switchstatement.c"

int controlstatementif();

int main()
{
   controlstatementif();
   controlstatement4();

   return 0;
}

int controlstatementif()
{
    int i = 20;

    if (i > 15)
    {
        printf("\n\t 10 is greater than 15");
    }

    printf("\n\t I am Not in if");
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tools.h"

int main()
{
    /*int a ;
    int b ;
    printf(" entrer un nombre a :" );
    scanf("%i",&a);
    printf(" entrer un nombre b :" );
    scanf("%i",&b);

    printf("%i greater than %i: %d \n" ,a,b, greather_than(a,b));
    printf("%i lower than %i : %d \n" ,a,b, lower_than(a,b));

    printf("%i +1 = %ld \n",a , increase(a));
    printf("%i - 1 = %i \n",b,decrease(b) );

    return 0; */

    int a ;
    int b ;
    printf(" entrer un nombre a :" );
    scanf("%i",&a);
    printf(" entrer un nombre b :" );
    scanf("%i",&b);

        printf("Main somme 1 : a + b = %i \n",a+b);
        printf("Main somme 2 : a + (b+1) = %i \n",a+b+1);
        return 0 ;
}

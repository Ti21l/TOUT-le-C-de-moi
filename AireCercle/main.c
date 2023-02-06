#include <stdio.h>
#include <stdlib.h>
#include "tools.h"

int main()
{
    float a ;
    printf("rentrez le diametre d'un cercle : ");
    scanf("%f",&a);
    float vRayon = rayon(a);
    float result= vRayon*vRayon*3.1415;
    printf("l'aire du cercle de diametre %d est de : %f cm²",a,result);

    return 0;
}



float rayon (float a)
{

    return( a / 2 );


}

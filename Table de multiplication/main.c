#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;
    printf("Entrez un entier positif:");
    scanf("%i",&a);
    int i = 0 ;

    while (i<11)
    {
        printf("%d * %d = %d \n ",a,i,a*i);
        i = i+1 ;
    }

    return 0;
}

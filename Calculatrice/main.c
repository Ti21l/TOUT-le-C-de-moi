#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bonjour !\n");
    int a,b ;
    printf("Veuillez saisir le premier nombre :");
    scanf("%i",&a);
    printf("Veuillez saisir le deuxieme nombre :");
    scanf("%i",&b );

    printf("Calculs : \n" );

    printf("%d + %d = %d \n",a,b,a+b);
    printf("%d - %d = %d \n",a,b,a-b);
    printf("%d * %d = %d \n",a,b,a*b);
    printf("%d / %d = %d \n",a,b,a/b);

    printf("Au revoir");



    return 0;
}

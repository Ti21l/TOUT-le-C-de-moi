#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Entrez la longueur du rectangle : \n");
    scanf("%i",&a);
    printf("Entrez sa largeur : \n");
    scanf("%i",&b);

    printf("le perimetre du rectangle est de %d",a*2+b*2);


    return 0;
}

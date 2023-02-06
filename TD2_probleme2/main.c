#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,s;
    printf("Saisir l'heure sous la forme HHMMSS au format 24h \n");

    printf("Saisir les heures : \n");
    scanf("%i",&h);
    printf("Saisir les minutes : \n");
    scanf("%i",&m);
    printf("Saisir les secondes : \n");
    scanf("%i",&s);

    if (s < 59 )
    {
        s=s+1 ;
    }
    else {
       m= m +1 ;
       s=0 ;
    }
    if (m > 59)
    {
        m = 0 ;
        h= h +1;
    }

    if ( h > 23)
    {
        h= 0;


    }

    printf("Une seconde plus tard il sera : %i h %i min %i s\n",h,m,s);
}

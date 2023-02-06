#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));


    int const ent = 12 ;
    int tab [ent];
    int occ = 12 ;
    int temp ;
    int r;


    for(int i = 0 ; i< 12 ; i++)
    {
        //printf("Entrer le nombre %d : \n",i);
        //scanf("%d",&temp);

        temp =  rand();
        tab[i] = temp ;
    }


    for (int j = 0 ; j<12 ; j++ )
    {
        r = r + tab[j];

    }


    printf("%d",r);


    return 0;
}

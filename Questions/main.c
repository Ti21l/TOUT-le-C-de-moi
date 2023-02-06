#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("En quelle ann%c a %ct%c cr%c%c le language c\n 1. 1972 \n 2.1977 \n 3. 1983 \n",130,130,130,130,130);
    int rep;
    scanf("%i",&rep);

    if (rep == 1){
        return(printf("Bravo ! \n"));
    }
    if (rep == 2){
        return(printf("Il faut relire tes cours ! \n"));
    }if (rep == 3){
        return(printf("Il faut relire tes cours \n"));
    }else{
        return(printf("reponse inconnue \n"));
    }


    return 0;
}

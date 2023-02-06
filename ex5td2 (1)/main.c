#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short int a = 65535 ;
    unsigned short int b = 0;
    int status = 0 ;

    printf("a vaut %i\n",a );
    if (a<65535)
        {
            a=a+1;
        }
    else
    {
        status = status -1 ;
        return(status);

    }
    printf("a vaut %i\n",a );

     printf("b vaut %i\n",b );
     if (b>0)
     {
         b=b-1;
     }
     else
     {
         status = status -1;
         return status ;
     }
      printf("b vaut %i\n",b );
    return 0;
}

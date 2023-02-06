#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a ;
   int b ;
   int c ;

   printf ("Entrer un nombre a : ");s
   scanf("%i",&a);
   printf ("Enter un nombre b : ");
   scanf ("%i",&b);
   printf ("Enter un nombre c : ");
   scanf ("%i",&c);


   if (a < b < c && b<c)
   {
       return(printf("%i < %i < %i",a,b,c));

   }
   if (a< b < c && c<b){

    return(printf ("%i < %i < %i", a,c,b));

   }
    if (b < a < c && a<c)
    {
        return(printf ("%i < %i < %i", b,a,c));
    }
    if (b < c < a && c<a)
    {
        return(printf ("%i < %i < %i", b,c,a));

    }
    if ( c < a < b && a<b  )
        {
            return(printf ("%i < %i < %i", c,a,b));
        }
    if (c<b<a && b<a)
    {
        return(printf ("%i < %i < %i", c,b,a));
    }



}

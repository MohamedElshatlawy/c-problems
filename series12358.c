#include <stdio.h>
#include <stdlib.h>


//series 12358...

int main()
{

   int p=0,i=1,j=0;
   for(j=0;j<10;j++){
    int t=i;
    i+=p;
    printf("%d ",i);
    p=t;

   }

    return 0;
}

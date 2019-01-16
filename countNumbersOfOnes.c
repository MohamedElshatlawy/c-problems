#include <stdio.h>
#include <stdlib.h>




int main()
{


int n=255;
int c=0;

while(n>0){
    if(n%2 !=0)
        c++;
    n/=2;
}

printf("%d",c);

    return 0;
}

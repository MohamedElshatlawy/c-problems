#include <stdio.h>
#include <stdlib.h>


void nums(){
static int k=0;
k++;
}

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

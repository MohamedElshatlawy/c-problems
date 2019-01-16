#include <stdio.h>
#include <stdlib.h>


//write a function to write 1 or 0 to a certain bit in an integer number

int main()
{
    int a=3;

    a=(1<<2) | a;
    printf("%d",a);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int getRoot(int r,int n){
int res=0;

int j;
while(1){
int k=res;
int t=k;
for(j=0;j<r-1;j++){
    k*=t;
}
   if(k<=n){
    printf("%d ",k);
    res++;
   }

   else
   break;

}


return res-1;
}
int main()
{

int v=getRoot(2,81);

printf("\n\n%d",v);



    return 0;
}

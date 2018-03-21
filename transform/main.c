#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,j=0;
    char a[10]="123";
    //int m = strlen(a);
    int b[100];
    sscanf(a,"%d",&n);

    //printf("%d\n",n);
    int r=8;
   while(n!=0){
        b[j]=n%r;
        n = n/r;
        j++;
    }
    int t;
    for(t= j-1;t>=0;t--){
        printf("%d",b[t]);
    }
    return 0;

}

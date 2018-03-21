#include <stdio.h>
#include <stdlib.h>

char radix[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};//ÏÔÊ¾µÄ×Ö·û

int main()
{
    int r=2;
    int n,j=0;
    printf("input number and radix:");
    scanf("%d%d",&n,&r);
    int b[100];
    while(n!=0){
        b[j]=n%r;
        n = n/r;
        j++;
    }
    int t;
    for(t= j-1;t>=0;t--){
        printf("%c",radix[b[t]]);
    }
    return 0;
}

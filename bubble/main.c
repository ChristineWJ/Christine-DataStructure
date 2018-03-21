#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    int i,j,temp;
    scanf("%d",&n);

    int a[n+1];
    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }


    for(i = 0;i<=n - 1;i++){
        for(j = n-1;j>i;j--){
            if(a[j]<a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i = 0;i<=n - 1;i++){
        for(j = n-1;j>i;j--){
            if(a[j]<a[j-1]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
      for(i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
    //int g=(length-1)/2;

    //printf("%d\n",a[g+1]);
    return 0;
}

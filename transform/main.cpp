#include <iostream>

using namespace std;

int main()
{
    char a[10]="123";
    int n,j=0;
    int m = strlen(a);
    int b[m];
    sscanf(a,"%d",&n);
    while(n%8!=0){
        b[j]=n%8;
        j++;
        n = n/8;
    }
    int t;
    for(t= m-1;t>=0;t++){
        printf("%d",b[t]);
    }

}

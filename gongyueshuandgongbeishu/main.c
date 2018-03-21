#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    scanf("%d %d",&a,&b);
    int p = a*b;
    if(a<b){
        temp =a;
        a = b;
        b = temp;
    }
    while(a%b!=0){
        temp = a%b;
        a = b;
        b = temp;
    }
    printf("最大公约数：%d\n",b);
    int gongbei = p/b;
    printf("最小公倍数：%d\n",gongbei);
}

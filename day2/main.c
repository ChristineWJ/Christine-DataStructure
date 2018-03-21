#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one,two,three;
    scanf("%d %d %d",&one,&two,&three);
    if(one>two)
    {
        if(one>three)
        {
            printf("%d",one);
        }
        else
        {
            printf("%d",three);
        }
    }
    else
    {
        if(two>three)
        {
            printf("%d",two);
        }
        else
        {
            printf("%d",three);
        }
    }
}

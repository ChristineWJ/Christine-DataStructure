#include <stdio.h>
#include <stdlib.h>

enum bool {False,True};
typedef enum bool bool;

bool leapyear(int year)
{
    bool leapyear = False;
    if(year%400==0||(year%4==0)&&(year%100!=0))
    {
        leapyear = True;
    }
    return leapyear;
}

void main()
{
    int year,month,day,sum = 0;
    int i;
    int a[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("按yyyy-mm-dd的格式输入一个日期\n");
    scanf("%d-%d-%d",&year,&month,&day);
    if(leapyear)a[1]=29;

    for(i = 0; i<month-1; i++)
    {
        sum = sum+a[i];
    }
    sum+=day;
    printf("total=%d\n",sum);
}

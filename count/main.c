#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int shuzi = 0,zimu  = 0,kongge = 0,others = 0;
    while((ch = getchar())!="\n")
    {
        if(ch>='0'&&ch<='9')
        {
            shuzi++;
        }
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            zimu++;
        }
        else if(ch==' ')
        {
            kongge++;
        }
        else
        {
            others++;
        }
    }
    printf("��ĸ������%d ���ָ�����%d �ո������%d ����������%d\n",zimu,shuzi,kongge,others);
}

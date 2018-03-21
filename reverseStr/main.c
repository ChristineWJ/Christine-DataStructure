#include <stdio.h>
int revstr(char str[])
{
    int n = strlen(str);
    int i,j;
    char temp;
    for(i=0;i<n-i-1;i++){
        temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }
    return 0;
}
int trans(char str[]){

}
int main()
{
    char str[256] = "hello world!";
    revstr(str);
    puts(str);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0, lenwith=0, lenwithout=0;
    printf("Enter a nstring:");
    gets(str);
    //without using strlen()
    while(str[i] != '\0')
    {
        lenwithout++;
        i++;
    }
    //using strlen()
        lenwith=strlen(str);
        printf("Length using string function=%d\n",lenwith);
        printf("length without using string function=%d\n",lenwithout);
        return 0;

}

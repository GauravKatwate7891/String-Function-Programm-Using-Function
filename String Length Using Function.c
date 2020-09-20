#include<stdio.h>
#include<conio.h>

int String_Length(char*);

int main()
{
    char str[50]="";
    int i=0;
    printf("\n Enter The string=>");
    gets(str);

    i=String_Length(&str);

    printf("\n String Length Is=>%d",i);

    getch();
    return 0;
}

int String_Length(char *str)
{
    int j=0;
    while(*str != '\0')
    {
        str++;
        j++;
    }
    return j;
}

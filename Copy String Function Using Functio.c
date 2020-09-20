#include<stdio.h>
#include<conio.h>

void Copy_strig(char*,char*);

int main()
{
    char str[20],str2[20];
    printf("\n Enter The string=>");
    gets(str);

    Copy_string(str2,str);

    printf("\n old String In Str=>%s",str);
    printf("\n New Copid Strig in Str2=>%s",str2);

    getch();
    return 0;

}

void Copy_string(char *str2,char *str)
{
    int i=0;

    while(str[i]!='\0')
    {
        str2[i] = str[i];
        i++;
    }
}
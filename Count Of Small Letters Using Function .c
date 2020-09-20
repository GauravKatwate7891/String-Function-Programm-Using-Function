#include<stdio.h>
#include<conio.h>

int Small_cnt(char*);

int main()
{
    char cStr[30]="";

    printf("\n Enter The String=>");
    gets(cStr);

    printf("\n **********==========**********\n");
    printf("\n Count Of Small Letters IS=>%d\n",Small_cnt(cStr));
    printf("\n **********==========**********");
    getch();
    return 0;
}

int Small_cnt(char*Cstr)
{
    int i=0,j=0;

    while(Cstr[i] != '\0')
    {
        if(Cstr[i]>='a' && Cstr[i]<='z')
        {
            j++;
        }
        i++;
    }
    return j;
}
#include<stdio.h>
#include<conio.h>

int Capital_cnt(char*);

int main()
{
    char cStr[30]="";

    printf("\n Enter The String=>");
    gets(cStr);

    printf("\n **********==========**********\n");
    printf("\n Count Of Capital Letters IS=>%d\n",Capital_cnt(cStr));
    printf("\n **********==========**********");
    getch();
    return 0;
}

int Capital_cnt(char*Cstr)
{
    int i=0,j=0;

    while(Cstr[i] != '\0')
    {
        if(Cstr[i]>='A' && Cstr[i]<='Z')
        {
            j++;
        }
        i++;
    }
    return j;
}
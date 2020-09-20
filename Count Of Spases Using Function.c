#include<stdio.h>
#include<conio.h>

int Speses_cnt(char*);

int main()
{
    char cStr[30]="";

    printf("\n Enter The String=>");
    gets(cStr);

    printf("\n **********==========**********\n");
    printf("\n Count Of Spases IS=>%d\n",Speses_cnt(cStr));
    printf("\n **********==========**********");
    getch();
    return 0;
}

int Speses_cnt(char*Cstr)
{
    int i=0,j=0;

    while(Cstr[i] != '\0')
    {
        if(Cstr[i] == ' ')
        {
            j++;
        }
        i++;
    }
    return j;
}
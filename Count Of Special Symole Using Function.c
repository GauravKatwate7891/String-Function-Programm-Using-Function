#include<stdio.h>
#include<conio.h>

int Special_Symbol_cnt(char*);

int main()
{
    char cStr[30]="";

    printf("\n Enter The String=>");
    gets(cStr);

    printf("\n **********==========**********\n");
    printf("\n Count Of Special Symbole IS=>%d\n",Special_Symbole_cnt(cStr));
    printf("\n **********==========**********");
    getch();
    return 0;
}

int Special_Symbole_cnt(char*Cstr)
{
    int i=0,j=0;

    while(Cstr[i] != '\0')
    {
        if(!((Cstr[i]>='0' && Cstr[i]<='9') || (Cstr[i]>= 'A' && Cstr[i]<='Z')||(Cstr[i]>= 'a' && Cstr[i]<='z')))
        {
            j++;
        }
        i++;
    }
    return j;
}
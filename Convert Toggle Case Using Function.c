#include<stdio.h>
#include<conio.h>

void Toggle_Convert(char*);

int main()
{
    char cStr[30]="";

    printf("\n Enter The String=>");
    gets(cStr);

    Toggle_Convert(cStr);

    printf("\n **********==========**********\n");
    printf("\n Convert in Toggle Case IS=>%s\n",cStr);
    printf("\n **********==========**********");
    getch();
    return 0;
}

void Toggle_Convert(char*Cstr)
{
    int i=0,j=0;

    while(Cstr[i] != '\0')
    {
        if(Cstr[i] >= 'a' && Cstr[i]<='z')
        {
            Cstr[i]=Cstr[i]-32;
        }
        else if(Cstr[i]>='A' && Cstr[i]<='Z')
        {
            Cstr[i]=Cstr[i]+32;
        }
        i++;
    }
    return j;
}
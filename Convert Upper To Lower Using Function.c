#include<stdio.h>
#include<conio.h>

void Small_Convert(char*);

int main()
{
    char cStr[30]="";

    printf("\n Enter The String=>");
    gets(cStr);

    Small_Convert(cStr);
    
    printf("\n **********==========**********\n");
    printf("\n Convert Uppercase TO Lowercase IS=>%s\n",cStr);
    printf("\n **********==========**********");
    getch();
    return 0;
}

void Small_Convert(char*Cstr)
{
    int i=0,j=0;

    while(Cstr[i] != '\0')
    {
        if(Cstr[i] >= 'A' && Cstr[i]<='Z')
        {
            Cstr[i]=Cstr[i]+32;
        }
        i++;
    }
    return j;
}
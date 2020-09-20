#include<stdio.h>
#include<conio.h>

int RevStr(char*,char*);

int main()
{
    char cStr[30]="",cStr2[30]="";

    printf("\n Enter The String=>");
    gets(cStr);

    RevStr(cStr,cStr2);

    printf("\n **********==========**********\n");
    printf("\n Orignel String IS=>%s\n",cStr);
    printf("\n Reverse String Is=>%s\n",cStr2);
    printf("\n **********==========**********");
    getch();
    return 0;
}

int RevStr(char*Cstr,char*Cstr2)
{
    int i=0,j=0;
    while(Cstr[i] != '\0')
    {
        i++;
    }
    i=i-1;
    while(i>=0)
    {
        Cstr2[j]=Cstr[i];
        j++;
        i--;
    }
    Cstr2[j]='\0';
}

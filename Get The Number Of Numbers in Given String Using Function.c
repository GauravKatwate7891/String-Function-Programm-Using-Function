#include<stdio.h>
#include<conio.h>

void Number(char*,char*);

int main()
{
    char cStr[30]="",cStr2[30]="";

    printf("\n Enter The String=>");
    gets(cStr);

    Number(cStr,cStr2);

    printf("\n **********==========**********\n");
    printf("\n Orignel String IS=>%s\n",cStr);
    printf("\n Number Of Given String Is=>%s\n",cStr2);
    printf("\n **********==========**********");
    getch();
    return 0;
}

void Number(char*Cstr,char*Cstr2)
{
    int i=0,j=0;

    while(Cstr[i] != '\0')
    {
        if(Cstr[i] >= '0' && Cstr[i]<='9')
        {
            Cstr2[j]=Cstr[i];
            j++;
        }
        i++;
    }
}
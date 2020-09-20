#include<stdio.h>
#include<conio.h>

int Num_cnt(char*);

int main()
{
    char cStr[30]="";

    printf("\n Enter The String=>");
    gets(cStr);

    printf("\n **********==========**********\n");
    printf("\n Count Of Numbers IS=>%d\n",Num_cnt(cStr));
    printf("\n **********==========**********");
    getch();
    return 0;
}

int Num_cnt(char*Cstr)
{
    int i=0,j=0;

    while(Cstr[i] != '\0')
    {
        if(Cstr[i]>='0' && Cstr[i]<='9')
        {
            j++;
        }
        i++;
    }
    return j;
}
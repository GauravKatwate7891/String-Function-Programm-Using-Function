#include<stdio.h>
#include<conio.h>

int Vowels_cnt(char*);

int main()
{
    char cStr[30]="";

    printf("\n Enter The String=>");
    gets(cStr);

    printf("\n **********==========**********\n");
    printf("\n Count Of Vowels IS=>%d\n",Vowels_cnt(cStr));
    printf("\n **********==========**********");
    getch();
    return 0;
}

int Vowels_cnt(char*Cstr)
{
    int i=0,j=0;

    while(Cstr[i] != '\0')
    {
        if(Cstr[i] == 'A'||Cstr[i]=='E'||Cstr[i]=='I'||Cstr[i]=='O'||Cstr[i]=='U'||Cstr[i]=='a'||Cstr[i]=='e'||Cstr[i]=='i'||Cstr[i]=='o'||Cstr[i]=='u')
        {
            j++;
        }
        i++;
    }
    return j;
}
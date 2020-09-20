#include<stdio.h>
#include<conio.h>

int Str_Palindrome(char*);

int main()
{
    char cStr[30]="";
    int Result=0;
    printf("\n Enter The String=>");
    gets(cStr);

    printf("\n **********==========**********\n");
    (Str_Palindrome(cStr)==0)?printf("\n Given String IS Palindrome\n"):printf("\n Given String Is Not Palindrome\n");
    printf("\n **********==========**********");
    getch();
    return 0;
}

int Str_Palindrome(char*Cstr)
{
    int i=0,j=0,result=0;
    while(Cstr[i] != '\0')
    {
        i++;
    }
    i=i-1;
    while(j<=i)
    {
        if(Cstr[j] != Cstr[i])
        {
            result=1;
        }
        j++;
        i--;
    }
    return result;
}

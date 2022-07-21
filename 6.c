#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);
    if(ch<'Z')
        printf("This word is uppercase ");
    else if(ch<'z')
        printf("This word is lowercase ");
    else if (ch<'9')
        printf("This word is digit");
    else
        print("This word is special word");
    getch();
}


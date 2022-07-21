#include<stdio.h>
#include<conio.h>3 3

int main()
{
   int n;
   printf("Enter an number ");
   scanf("%d",&n);
   if(n>=1)
    printf("\nThis is positive  ");
   else if(n<=-1)
    printf("\nThis is negative ");
    else if(n==0)
        printf("\nThis is Zero ");
    getch();
}

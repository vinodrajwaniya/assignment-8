#include<stdio.h>
#include<conio.h>3 3

int main()
{
   int n;
   printf("Enter an number ");
   scanf("%d",&n);
   if(n%7==0 || n%3==0)
    printf("\nThis is divided ");
   else
    printf("\nThis is non-divided ");
    getch();
}

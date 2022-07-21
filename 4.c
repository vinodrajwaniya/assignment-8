#include<stdio.h>
#include<conio.h>3 3

int main()
{
   int n;
   printf("Enter a year ");
   scanf("%d",&n);
   if(n%4==0)
    printf("\nThis is a leap year ");
   else
    printf("\nThis is a not a leap year ");
    getch();
}

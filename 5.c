#include<stdio.h>
#include<conio.h>3 3

int main()
{
    int a,b,c;
    printf("Enter three no ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("The  greatest no is %d",a);
        else
            printf("The greatest no is %d",c);
    }else if(c>b)
            printf("The greatest no is %d",c);
        else
            printf("The greatest no is %d",b);


    getch();
}

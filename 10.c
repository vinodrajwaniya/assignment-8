#include <math.h>
#include <stdio.h>
int main()
{
    float p,c,b,m,co,Percentage;
    printf("Enter Physics no ");
    scanf("%f",&p);
    printf("Enter Chemistry no ");
    scanf("%f",&c);
    printf("Enter Biology no ");
    scanf("%f",&b);
    printf("Enter Mathematics no ");
    scanf("%f",&m);
    printf("Enter Computer no ");
    scanf("%f",&co);

    Percentage=(p+c+b+m+co)/5.0;

    printf("%.2f\n",Percentage);

    if(Percentage >= 90.00)
        printf("Grade A");
    else if(Percentage >= 80.00)
            printf("Grade B");
    else if(Percentage >= 70.00)
        printf("Grade C");
    else if(Percentage >= 60.00)
        printf("Grade D");
    else if(Percentage >= 40.00)
        printf("Grade E");
    else if (Percentage < 40.00)
        printf("Grade F");
getch();
}

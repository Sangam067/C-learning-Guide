#include<stdio.h>
#include<conio.h>
void main()
{
    double a,b,c;
    printf("Enter three numbers:");
    scanf("%lf%lf%lf",&a,&b,&c);

    if (a>=b && a>=c)
    {
        printf("Largest number is: %.2lf",a);
    }
    else if (b>=a && b>=c)
    {
        printf("Largest number is: %.2lf",b);
    }
    else
    {
        printf("Largest number is: %.2lf",c);
    }
    getch();
}
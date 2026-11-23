#include<stdio.h>
#include<conio.h>

int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    if((year%400==0)||((year%4==0)&&(year%100!=0)))  //Checking only year % 4 == 0 is not enough because Earth actually takes 365.2422 days to orbit the Sun—not an exact 365.25 days.
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    getch();
}
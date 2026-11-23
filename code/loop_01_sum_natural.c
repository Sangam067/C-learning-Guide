#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) //this is the way we use a loop in C
     {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
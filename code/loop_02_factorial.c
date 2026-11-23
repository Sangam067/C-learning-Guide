#include<stdio.h>

int main(){
    int n;
    unsigned long long factorial =1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; i++) //this is a way to find factorial 
        {
            factorial *= i;
        }
        printf("%d! = %llu\n", n, factorial);
    }

    return 0;
}
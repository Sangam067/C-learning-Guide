#include<stdio.h>
int main(){
    int n, p=1;

    printf("Enter a positive integer:");
    scanf("%d",&n);

    if(n<=1){
        p=0;
    }else
    {
        for(int i=2;i<n;i++){
            if(n%i==0){p=0;
            break;
            }
        }
    }


if(p){
    printf("%d is a Prime Number. \n",n);
}else{
    printf("%d is not a Prime Number. \n",n);
}
return 0;
}

//The program starts by assuming `n` is prime (`is_prime = 1`), rules out numbers `1` or less, and loops from `2` to `n / 2` to check if any number divides `n` evenly. As soon as a single divisor is found, it sets `is_prime = 0` and uses `break` to immediately exit the loop without wasting time on remaining checks before printing the final result.
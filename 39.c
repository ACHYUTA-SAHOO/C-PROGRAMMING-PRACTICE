#include<stdio.h>

int main(){

    int i, fact = 1, num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        fact *= i;
    }
    printf("Factorial of %d = %d\n", num, fact);    
    return 0;
}
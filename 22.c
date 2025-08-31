#include<stdio.h>

int main(){

    float principal, rate, time, amount, interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    amount = principal * pow((1 + rate / 100), time);
    interest = amount - principal;
    printf("Compound Interest: %.2f\n", interest);
    return 0;
}
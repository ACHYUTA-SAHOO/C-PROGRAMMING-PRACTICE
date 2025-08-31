#include<stdio.h>

int main(){

    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle (0-31): ");
    scanf("%d", &n);
    num ^= (1 << n);
    printf("Number after toggling %dth bit: %d\n", n, num);
    return 0;
}
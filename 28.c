#include<stdio.h>

int main(){
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to set (0-31): ");
    scanf("%d", &n);
    num |= (1 << n);
    printf("Number after setting %dth bit: %d\n", n, num);
    return 0;
}
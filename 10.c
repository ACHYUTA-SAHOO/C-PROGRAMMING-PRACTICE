#include<stdio.h>

int main(){
    float a,b;
    printf("Enter length and breadth of rectangle:");
    scanf("%f%f",&a,&b);
    printf("Area=%.2f\nPerimeter=%.2f\n", a*b, 2*(a+b));
    return 0;
}
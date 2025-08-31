#include<stdio.h>

int main(){
    //swap with temp using scanf
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d b=%d\n",a,b);
    return 0;
}
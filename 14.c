#include<stdio.h>

int main(){
    //logical operators using scanf
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("!(a>0)=%d\n", !(a>0));
    printf("(a>0||b>0)=%d\n", (a>0 || b>0));
    printf("(a>0&&b>0)=%d\n", (a>0 && b>0));
    return 0;

}
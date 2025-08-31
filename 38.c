#include<stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(c >= 'A' && c <= 'Z'){
        printf("%c is an uppercase letter.\n", c);
    } else {
        printf("%c is not an uppercase letter.\n", c);
    }
    return 0;
}
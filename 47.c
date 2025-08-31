#include<stdio.h>

int main(){
    int n, i, age, sum = 0;
    float average;

    printf("Enter the number of people: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);
        sum += age;
    }

    average = (float)sum / n;
    printf("Average age: %.2f\n", average);

    return 0;
}
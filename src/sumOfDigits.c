#include <stdio.h>

int main(void) {
    int number;
    int sum = 0;

    printf("Enter integer: ");
    scanf("%d", &number);

    while(number > 0) {
        sum += (number % 10);
        number/=10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
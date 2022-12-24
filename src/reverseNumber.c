#include <stdio.h>

int main(void) {
    int number;
    int reversedNumber = 0;
    
    printf("Enter integer: ");
    scanf("%d", &number);

    while(number > 0) {
        reversedNumber = (reversedNumber * 10) + (number % 10);
        number/=10;
    }
    printf("Reversed integer: %d\n", reversedNumber);

    return 0;
}
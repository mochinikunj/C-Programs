#include <stdio.h>

int main(void) {

    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    printf(number % 5 == 0 && number % 3 == 0 ? "FizzBuzz" : (number % 5 == 0) ? "Fizz" : (number % 3 == 0) ? "Buzz" : "%d", number);

    return 0;
}
#include <stdio.h>

int main(void) {
    int number;
    int sumOf1stLast = 0;
    int iteration = 0;
    
    printf("Enter integer: ");
    scanf("%d", &number);

    while(number > 0) {
        if (iteration == 0)
        	sumOf1stLast += (number % 10);
        else if (number/10 == 0)
        	sumOf1stLast += (number % 10);

        iteration++;
        number/=10;
    }
    printf("sumOf1stLast digits: %d\n", sumOf1stLast);

    return 0;
}
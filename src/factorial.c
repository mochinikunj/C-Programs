#include <stdio.h>

#define MAX 200

int main(void) {
    int result[MAX] = {1};
    int result_size = 1;
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    for(int multiplier=2; multiplier<=number; multiplier++) {
        int carry = 0;
        for(int i=0; i<result_size; i++) {
            int product = multiplier * result[i] + carry;
            result[i] = product % 10;
            carry = product / 10;
        }
        while(carry) {
            result[result_size++] = carry % 10;
            carry /= 10;
        }
    }

    printf("Result: ");
    for(int i=result_size-1; i>=0; i--) 
        printf("%d", result[i]);
    printf("\n");

    return 0;
}
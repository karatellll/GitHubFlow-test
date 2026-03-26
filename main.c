#include <stdio.h>

int sum(int num1, int num2) {
    return num1 + num2;
}

int mult(int num1, int num2) {
    return num1 * num2;
}

int div(int num1, int num2) {
    return num1 / num2;
}

int main() {
    int num1 = 8;
    int num2 = 4;
    int result;
    
    result = sum(num1, num2);
    printf("sum = %d\n", result);

    result = mult(num1, num2);
    printf("mult = %d\n", result);

    result = div(num1, num2);
    printf("div = %d\n", result);
}



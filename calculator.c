#include <stdio.h>

int main() {
    int a, b, res; 
    char operator;

    printf("Enter expression: ");

    scanf("%d %c %d", &a, &operator, &b);

    printf("%d %c %d = %d\n", a, operator, b, res);

    return 0;
}

int add(int a, int b) {
    return (a + b);
}

int subtract(int a, int b) {
    return (a - b);
}

int multiply(int a, int b) {
    return (a * b);
}

int divide(int a, int b) {
    return (a / b);
}
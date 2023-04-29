#include <stdio.h>

int main() {
    int a, b; 
    char operator;

    printf("Enter expression: ");
    scanf("%d %c %d", &a, &operator, &b);
    printf("%d %c %d", a, operator, b);

    return 0;
}
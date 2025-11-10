#include <math.h>
#include <stdio.h>

int main()
{
    int a, b;
    char op;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("enter operater: ");
    scanf("%c", &op);

    int result;
    switch (op)
    {
    case '+':
        result = a + b;
        printf("result = %d", result);
        break;

    case '-':
        result = a - b;
        printf("result = %d", result);
        break;

    case '*':
        result = a * b;
        printf("result = %d", result);
        break;

    case '/':
        result = a / b;
        printf("result = %d", result);
        break;

    default:
        printf("not valid");
        break;
    }
}
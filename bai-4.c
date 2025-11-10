#include <math.h>
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("math score: ");
    scanf("%d", &a);

    printf("english score: ");
    scanf("%d", &b);

    printf("literature score: ");
    scanf("%d", &c);

    int average = (a + b + c) / 2;
    if (average >= 9)
    {
        printf("great");
    }
    else if (average >= 4 && average <= 8)
    {
        printf("average");
    }
    else {
        printf("stupid");
    }
}
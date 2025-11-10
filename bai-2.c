#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    printf("nhap 3 so a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    int max = a;

    if (b > max) {
        printf("b is max");
    }
    else if (c > max) {
        printf("c is max");
    }
    else {
        printf("a is max");
    }

}
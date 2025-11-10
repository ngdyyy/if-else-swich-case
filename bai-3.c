#include <math.h>
#include <stdio.h>

int main()
{

    int i;
    printf("nhap nam: ");
    scanf("%d", &i);

    if (i % 4 == 0 && i % 100 != 0)
    {
        if (i % 400 == 0)
        {
            printf("yes");
        }
    }
    else
    {
        printf("no");
    }
}
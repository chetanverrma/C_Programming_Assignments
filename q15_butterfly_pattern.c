#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++)
    {
        int stars;

        if (i <= mid)
            stars = i;
        else
            stars = n - i + 1;

        int spaces = 2 * (n - stars) - 1;

        for (int j = 1; j <= stars; j++)
            printf("*");

        for (int j = 1; j <= spaces; j++)
            printf(" ");

        for (int j = 1; j <= stars; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
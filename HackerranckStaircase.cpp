#include<stdio.h>
int main()
{
    int n, space = 0, hash = 0, i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        space = n - (i+1);
        for(j = 0; j < space; j++)
        {
            printf(" ");
        }

        hash = i + 1;
        for(j = 0; j < hash; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}

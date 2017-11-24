#include<stdio.h>
int main()
{
    int n, r, c, i;
    int number;
    int primary_diagonal = 0, secondary_diagonal = 0;

    scanf("%d", &n);
    int arr[n][n];

    for(r = 0; r < n; r++)
    {
        for(c= 0; c < n; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }

    //Store
    int temp_n = n-1;
    for(r = 0; r < n; r++)
    {
        primary_diagonal += arr[r][r];
        secondary_diagonal += arr[r][temp_n];
        temp_n--;
    }

    //To comparison and subtract from one another
    int dif = (primary_diagonal > secondary_diagonal)? primary_diagonal - secondary_diagonal : secondary_diagonal - primary_diagonal;
    printf("%d\n", dif);

    return 0;
}

#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int array[n];
    for(int array_i=0;array_i<n;array_i++)
    {
        scanf("%d",&array[array_i]);
    }
    for(int array_i=0;array_i<n;array_i++)
    {
        sum+=array[array_i];
    }
    printf("%d\n",sum);
    return 0;
}

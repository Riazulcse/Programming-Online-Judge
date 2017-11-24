#include<stdio.h>
int main()
{
    int N,L,A[50];
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d",&L);
        int i,j ,count=0,temp;
        for(i=0; i<L; i++)
            scanf("%d",&A[i]);
        for(i=0; i<L; i++)
        {
            for(j=L-1; j>i; j--)
            {
                if(A[j-1]>A[j])
                {
                    temp=A[i];
                    A[i]=A[i-1];
                    A[i-1]=temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes%d swaps.\n",count);
    }
    return 0;
}

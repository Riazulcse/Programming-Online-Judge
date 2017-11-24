#include<stdio.h>
int main()
{
    int n, i, positives = 0, negatives = 0, zeros = 0;
    float answernegative = 0.0, answerPositive = 0.0, answerZero = 0.0;
    int number;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
       scanf("%d", &number);
       if(number > 0)
            positives += 1;

        else if(number < 0)
            negatives += 1;

       else
           zeros += 1;

    }


    answerPositive = (float)positives/n;
    answernegative = (float)negatives/n;
    answerZero = (float)zeros/n;

    printf("%.6f\n%.6f\n%.6f\n", answerPositive, answernegative, answerZero);

    return 0;
}

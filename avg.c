#include<stdio.h>
int main()
{
    int n, sum=0;
    float avg;
    for(int i=1; i<=5; i++)
    {
        printf("Enter Number %d: \n", i);
        scanf("%d", &n);
        sum= sum+n;
    }
    avg= sum/5;
    printf("\nAvg= %.2f", avg);
    return 0;
}
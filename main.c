// calculate the sum of numbers from 1 to entered number by user

#include <stdio.h>
int main(void)
{
    int i, n, sum=0;
    
    //taking input from the user
    printf("\nenter any number : ");
    scanf("%d", &n);
    
    //applying condition for calculating sum upto entered number
    for (i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    
    //displaying output
    printf("\nsum upto %d is %d \n", n,sum);
    
    return 0;
}

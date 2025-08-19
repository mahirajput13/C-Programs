//checks whether the number is prime or not
//number should be entered by the user

#include <stdio.h>
int main (void)
{
    int num, i, sum = 0;
    
    //entering number bby the user
    printf("\nenter any number to check whether it is prime or not  : ");
    scanf("%d", &num);
    
    //applying condition to check whether it is prime or not
    for (i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            sum = sum + 1;
        }
    }
    
    //printing the output to the user after checking
    if(sum==2)
    {
        printf("\nthe entered number is prime\n");
    }
    else
    {
        printf("\nthe entered number is not prime\n");
    }
    
    
    return 0;
}

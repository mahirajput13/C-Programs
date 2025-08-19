//checking and printing prime number between 3 to 100
#include <stdio.h>
int main(void)
{
    
    int i, num;
    
    printf("\nprime numbers between 3 to 100 are : \n");
    
    //applying condition to check the number is prime or not
    for (num=3; num<=100; num++)
    {
        int sum=0;
        
        for (i=1; i<=num; i++)
        {
            
            if(num%i==0)
            {
                sum = sum + 1;
            }
            
        }
       
       if(sum==2)
       {
           printf("%d, ", num);
       }
        
    }
    
    return 0;
}


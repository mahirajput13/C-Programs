// program to implement the sign function
// determine number is positive or negative

#include <stdio.h>
int main(void)
{
    int num;
    
    //taking input from the user
    printf("enter any number : ");
    scanf("%d", &num);
    
    //applying condition and displaying output
    if(num>0)
    {
        printf("\nentered number is positive that is +%d\n", num);
    }
    else if (num==0)
    {
        printf("\nentered number is neither positive nor negative.\nentered number is %d\n", num);
    
    }
    else
    {
        printf("entered number is negative.\nthe number is %d \n", num);
    }
    
    return 0;
}

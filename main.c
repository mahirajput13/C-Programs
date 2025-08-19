// determine if the number entered by user is even or odd

#include <stdio.h>
int main(void)
{
    int num;
    
    //taking input from the user
    printf("\nenter any number to check if it is even or odd : ");
    scanf("%d", &num);
    
    //applying condition and displaying output
    if((num%2)==0)
    {
        printf("\nnumber entered by you is even\n");
    }
    else
    {
        printf("number entered by you is odd\n");
    }
    
    return 0;
}

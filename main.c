// making a program multiplying two numbers using a function

#include <stdio.h>

// making function to multiply two numbers
void mul(int x, int y)
{
    int result = x*y;
    printf("the multiplication of two numbers is %d \n", result);
}

//main funmction
int main(void)
{
    //passing parameters and calling function
    mul(10, 20);
    mul(45, 1);
    mul(3,8);
    
    return 0;
 }



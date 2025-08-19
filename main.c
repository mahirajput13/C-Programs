// multiplying two numbers using return keyword in function

#include <stdio.h>

// making a function to multiply two numbers using return keyword
int mul(int a, int b)
{
    int result = a*b;
    return result;
}

//main function
int main(void)
{
    int result = 0;
    result = mul(10, 20);
    printf("the multiplication of two numbers is %d \n", result);
    return 0;
}

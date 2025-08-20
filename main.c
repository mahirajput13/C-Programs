//this is my third pointer program
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    
    int num = 345670;
    int *pointer = NULL;
    pointer = &num;
    
    printf("the address of the pointer is %p \n", &pointer);
    printf("the value of the pointer is %p \n", pointer);
    printf("the value of what the pointer is pointing to is %d \n", *pointer);
    
    return 0;
}

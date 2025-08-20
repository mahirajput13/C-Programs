// this is my fifth pointer program
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    
    int i = 10;
    float f = 2.34;;
    char ch = 'k';
    
    //creating void pointer
    void *ptr;
    
    //casting void pointer to int
    ptr = &i;
    printf("value of i is %d\n", *(int*)ptr);
    
    //casting void pointer to float
    ptr = &f;
    printf("value of f is %f\n", *(float*)ptr);
    
    //casting void pointer to character
    ptr = &ch;
    printf("value of ch is %c\n", *(char*)ptr);
    
    return 0;
    
}

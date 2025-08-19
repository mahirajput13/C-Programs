// unsigned int performing on bit level
// bitwise operators

#include <stdio.h>
int main (void)
{
    
    unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1101
    int result = 0;
    
    // this '&', '|'and other bitwise operator works on bit level
    result = a|b;
    
    printf("result is %d \n", result);
    
    return 0;
}

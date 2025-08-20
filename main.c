// this is my first pointer program
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int count = 10, x;
    int *pointer = NULL;
    pointer = &count;
    x = *pointer;
    
    printf("count = %i, x = %i\n", count, x);
    return 0;
}

// malloc example

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    
    int *x = malloc(sizeof(int));
    *x = 54;
    free(x);
    return 0;
}

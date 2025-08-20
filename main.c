// this is my second pointer program

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    
    int number = 0;
    int *pnum = NULL;
    
    number = 10;
    
    printf("the number's value is %d\n", number);
    printf("the number's address is %p\n", &number);
    
    pnum = &number;
    
    printf("pnum's address is %p \n", pnum);
    printf("pnum's value is %d \n", *pnum);
    printf("pnum's size is %zd bytes \n", sizeof(pnum));
    
    return 0;
}

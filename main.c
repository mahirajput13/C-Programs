//this is my fourth pointer program

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    
    long n1 = 0l;
    long n2 = 0l;
    long *pnum = NULL;
    
    pnum = &n1;
    *pnum = 2l;
    ++n2;
    n2=+*pnum;
    
    pnum = &n2;
    ++*pnum;
    
    printf("n1 = %ld \nn2 = %ld\n*pnum = %ld\n*pnum + n2 = %ld\n", n1, n2, *pnum, *pnum + n2);
     
    return 0;
    
}

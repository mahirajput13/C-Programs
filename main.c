// print numbers from 1 to 5 using do while loop
// example of counter controlled loop

#include <stdio.h>
int main(void)
{
    
    int num=1;
    
    //applying condition using do while loop
    do {
        printf("%d\n", num);
        num++;
    } while (num<=5);
    
    return 0;
}

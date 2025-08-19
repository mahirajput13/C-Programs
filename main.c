// exampple of continue statement

#include <stdio.h>
int main(void)
{
    
    int i;
    
    // applying loop and continue statement
    for(i=1; i<=5; i++)
    {
        if(i==3)
        continue;
        
        printf("%d\n", i);
    }
    
    return 0;
}

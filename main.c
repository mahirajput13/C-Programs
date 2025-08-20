// example of pass by reference
#include <stdio.h>
#include <stdlib.h>

//creating function to swap the value
void swap(int *x, int *y)
{
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
    
    return;
}

//creating main function
int main(void)
{
    
    int a = 100, b=200;
    
    //printing values before swapping
    printf("before swapping\n");
    printf("the value of a %d\n",a);
    printf("the value of b %d\n",b);
    
    printf("\nafter swapping\n");
    
    //calling swap function
    swap(&a,&b);
    printf("the value of a %d\n",a);
    printf("the value of b %d\n",b);
    
    return 0;
    
}

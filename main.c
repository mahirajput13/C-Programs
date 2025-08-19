//calculate the average of the elements of an array
#include <stdio.h>
int main (void)
{
    int grades[10], sum = 0, i, avg;
    
    //entering elements into the array (from the user)
    printf("\nenter any 5 elements into the array\n");
    for (i=0; i<5; i++)
    {
        scanf("%d", &grades[i]);
    }
    
    //applying condition to get the sum of the elements of the array
    for (i=0; i<5; i++)
    {
        sum = sum + grades[i];
    }
    
    //finding average value
    avg = sum/5;
    
    //printing output to the user
    printf("the average value of the elements is %d \n", avg);
    
    return 0;
    
}

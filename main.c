// example of three dimensional array
// elements of array should be entered by the user
// print the elements of the array and the sum of all the elements of the array

#include <stdio.h>
int main(void)
{
    
    int i, j, k, sum=0, ar[1][2][3];
    
    //asking user to enter the elements into the array
    printf("\nenter the elements into the array : \n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<4; k++)
            {
                scanf("%d ", &ar[i][j][k]);
            }
        }
    }
    
    //printing the elements of the array
    printf("\nthe elements of the array are : \n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<4; k++)
            {
                printf("%d", ar[i][j][k]);
                printf("\t");
            }
            printf("\n");
        }
        printf("\n");
    }
    
    //calculating sum of the elements of the array
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<4; k++)
            {
                sum=sum+ar[i][j][k];
            }
        }
    }
    
    //showing output of the sum to the user
    printf("\nthe sum of the elements of the array is %d ", sum);
    
    return 0;
}

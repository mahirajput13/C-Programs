// calculate area and perimeter of rectangle
// width and length is entered by the user

#include <stdio.h>
int main(void)
{
    double l,b,p,a;
    
    //taking input
    printf("enter the length of the rectangle : ");
    scanf("%lf", &l);
    printf("\nenter  the width of the rectangle : ");
    scanf("%lf", &b);
    
    //calculating values
    p = 2.0*(l + b);
    a = (l*b);
    
    //displaying result/output
    printf("\nperimeter of the rectangle is %lf ", p);
    printf("\narea of the rectangle is %lf \n", a);
    
    return 0;
    
}

// this program calculates your weekly pay
// number of hours worked in a week are entered by the user
// display the output as gross pay, the taxes, and the net pay according to given assumptions

#include <stdio.h>
int main(void)
{
    float netpay, grosspay, taxes, hours;
    
    //taking input from the user
    printf("\nenter the number of hours worked in a week : ");
    scanf("%f", &hours);
    
    //applying condition for calculating grosspay
    if(hours<=40)
    {
        grosspay = (hours*12.0);
    }
    else
    {
        grosspay = (40*12.0) + ((hours-40)*18);
    }
    
    //applying condition for calculating taxes
    if(grosspay<=300)
    {
        taxes = .15*grosspay;
    }
    else if(grosspay>300 && grosspay<=450)
    {
        taxes = (300.0*.15) + ((grosspay - 300)*.20);
    }
    else
    {
        taxes = (300.0*.15) + (150.0*.20) + ((grosspay - 450.0)*.25);
    }
    
    //calculating netpay
    netpay = grosspay - taxes;
    
    //displaying output
    printf("\nyour grosspay this week is %f \n", grosspay);
    printf("\nyour taxes this week is %f \n", taxes);
    printf("\nyour netpay this week is %f \n\n", netpay);
    
    return 0;
}

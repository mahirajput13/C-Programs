// convert number of minutes into days and years
// minutes should be entered by the user

#include <stdio.h>
int main(void)
{
    float mins, days, normalyear, leapyear;
    
    //taking input from the user
    printf("\nenter the number of minutes to convert them into days, normal years and leap years : ");
    scanf("%f", &mins);
    
    //applying condition
    days = (mins/(60.0*24.0));
    normalyear = (mins/(60.0*24.0*365.0));
    leapyear = (mins/(60.0*24.0*366.0));
    
    //displaying output
    printf("\nthe number of days in entered minutes are %f ", days);
    printf("\nthe number of normal years in entered minuutes are %f ", normalyear);
    printf("\nthe number of leap years in entered minutes are %f \n", leapyear);
    
    return 0;
}

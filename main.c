// example of enum datatype

#include <stdio.h>
int main(void)
{
    //defining datatypes
    enum company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;
    
    //displaying required output
    printf("\nthe value of xerox is %d \n", xerox);
    printf("\nthe value of google is %d \n", google);
    printf("\nthe value of ebay is %d \n\n", ebay);
    
    return 0;
    
}

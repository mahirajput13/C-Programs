// comparing two strings using strcmp function

#include <stdio.h>
#include <string.h>
int main(void)
{
   
    char str1[] = "excuse me";
    char str2[] = "yes";
    
    // displays 0 as output if strings are equal
    // displays +ve value if string 1 is greater than string 2
    // displays -ve value if string 2 is greater than string 1
    
    int result = strcmp(str2, str1);
    printf("%d\n", result);
    return 0;
}

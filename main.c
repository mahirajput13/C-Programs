// copying one string into another using strcpy function

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[] = "Hey! What's up?";
    char str2[50];
    
    //copying string 1 to string 2 and then displaying it as output
    strcpy(str2,str1);
    printf("the string is %s \n", str2);
    return 0;
}

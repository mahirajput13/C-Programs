// example of catenation of the strings

#include <stdio.h>
#include <string.h>
int main(void)
{
    
    char str1[] = "Hey!";
    char str2[] = "What's up?";
    
    //catenation of string occurs
    strcat(str2, str1);
    printf("final string is %s \n", str2);
    
    return 0;
}

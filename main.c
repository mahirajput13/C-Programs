// example of strlen()
// calculate the length of thr string

#include <stdio.h>
#include <string.h>
int main(void)
{
    
    char mystring[] = "Hey! My name is Mahi Rajput.";
    
    //calculate and print the lenth of the string
    printf("the length of the string is : %lu \n", strlen(mystring));
    return 0;
    
}

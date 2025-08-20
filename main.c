// this program will count the length of the string without using strlen()

#include <stdio.h>
int main(void)
{
    
    char str1[] = "hello!";
    char str2[] = "my name is Mahi";
    int count = 0;
    
    //counts the length of the 1 string
    while(str1[count]!='\0')
        count++;
    
    //prints the length of the first string
    printf("the length of the string %s is %d \n", str1, count);
    
    //initializing count to 0 and count the length of the 2 string
    count = 0;
    while(str2[count]!='\0')
        count++;
    
    //prints the length of the second string
    printf("the length of the string %s is %d \n", str2, count);
    
    return 0;
    
}

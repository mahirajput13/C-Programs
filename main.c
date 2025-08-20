// strchr function example
// this function searches character in a string

#include <stdio.h>
#include <string.h>
int main(void)
{
    
    char str[] = "the quick brown fox";
    char ch = 'u';  //character to be searched
    char *pointer = NULL;
    
    pointer = strchr(str, ch);
    printf(" %c\n", *pointer);
    return 0;
    
}

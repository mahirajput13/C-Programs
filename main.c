// strtok function example

#include <stdio.h>
#include <string.h>
int main(void)
{
    
    char str1[]  = " hello - how are you - my name is - jason";
    const char str2[] = "-";
    char *token;
    
    // get the first token
    token = strtok(str1, str2);
    
    // walk through other tokens
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, str2);
    }
    return 0;
}

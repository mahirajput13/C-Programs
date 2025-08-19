//argument and vector

#include <stdio.h>
int main(int argc, char *argv[])
{
    
    int numofarguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    
    //displaying output
    printf("number of arguments is %d \n", numofarguments);
    printf("\nargument 1 is the program name : %s \n", argument1);
    printf("\nargument 2 is the command line argument : %s \n", argument2);
    
    return 0;
}
    

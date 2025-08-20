// counting the number of letters, digits, punctuation characters in the string

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    
    char str[100];
    int nletters = 0, ndigits = 0, npunct = 0;
    
    //taking string as input
    printf("\nenter an interesting string of less than 100 characters : \n");
    scanf("%s", str);
    
    //applying loop
    for (int i=0; str[i]!='\0'; i++)
    {
        if(isalpha(str[i]))
            ++nletters;
        else if(isdigit(str[i]))
            ++ndigits;
        else if(ispunct(str[i]))
            ++npunct;
    }
    
    //printing the counted letters, digits, punctuation characters
    printf("\nyour entered string contains %d letters\n", nletters);
    printf("\nyour entered string contains %d digits\n", ndigits);
    printf("\nyour entered string contains %d punctuation characters\n\n", npunct);
    
    return 0;
    
}

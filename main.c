// calculator program using statement

#include <stdio.h>
int main(void)
{
    int a, b, add, sub, mul, div ;
    char operator;
    
    //taking input from the user
    printf("\nenter value 1 : ");
    scanf("%d", &a);
    printf("\nenter value 2 : ");
    scanf("%d", &b);
    
    printf("\nselect any symbol\n\n'+' for addition\n'-' for subtraction\n'*' for multiplication\n'/' for division\n");
    scanf(" %c",&operator);
    
    //applying switch cases
    switch (operator)
    {
        case '+':
            add = a+b;
            printf("\naddition of entered number is %d\n", add);
            break;
        case '-':
            sub = a-b;
            printf("\nsubtraction of entered number is %d\n", sub);
            break;
        case '*':
            mul = a*b;
            printf("\nmultiplication of entered number is %d\n", mul);
            break;
        case '/':
            if(b!=0)
            {
                div = a/b;
                printf("\ndivision is %d\n", div);
            }
            else
            {
                printf("error : division by zero/n");
            }
            break;
        default:
            printf("\ninvalid operator\n");
            break;
    }
    
    return 0;
}

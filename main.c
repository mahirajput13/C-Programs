// display the size of various datatypes

#include <stdio.h>
int main(void)
{
    //displaying output
    printf("datatype char occupies %lu bytes\n", sizeof(char));
    printf("datatype short occupies %lu bytes\n", sizeof(short));
    printf("datatype int occupies %lu bytes\n", sizeof(int));
    printf("datatype float occupies %lu bytes\n", sizeof(float));
    printf("datatype long occupies %lu bytes\n", sizeof(long));
    printf("datatype double occupies %lu bytes\n", sizeof(double));
    printf("datatype long long occupies %lu bytes\n", sizeof(long long));
    printf("datatype long double occupies %lu bytes\n", sizeof(long double));
    
    return 0;
}

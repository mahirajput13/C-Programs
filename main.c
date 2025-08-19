// example of both enum and switch case

#include <stdio.h>
int main(void)
{
    //defining variables
    enum weekday{monday, tuesday, wednesday, thursday, friday, saturday, sunday};
    enum weekday today = monday;
    
    //applying switch cases
    switch (today)
    {
        case sunday:
            printf("today is sunday\n");
            break;
        case monday:
            printf("today is monday\n");
            break;
        case tuesday:
            printf("today is tuesday\n");
            break;
        case wednesday:
            printf("today is wednesday\n");
            break;
        case thursday:
            printf("today is thursday\n");
            break;
        case friday:
            printf("today is friday\n");
            break;
        case saturday:
            printf("today is saturday\n");
            break;
        default:
            printf("whatever\n");
            break;
    }
    
    return 0;
}

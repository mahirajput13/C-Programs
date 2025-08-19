//make a weather program that displays the total  rainfall for each year, average yearly rainfall, and the average rainfall for each month

#include <stdio.h>
#define years 5
#define months 12
int main (void)

{
    
    //initializing data to the rain array
    float rain[years][months] = {
        { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        { 8.5, 8.2, 1.2, 1.6, 2.4,  .0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        { 9.1, 8.5, 6.7, 4.3, 2.1,  .8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        { 7.2, 9.9, 8.4, 3.3, 1.2,  .8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        { 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    
    int year, month;
    float total, subtot;
    
   // applying condition and printing data of rainfall for each year
    printf("\nYEAR \t\t RAINFALL (inches)\n");
    for (year=0,total=0; year<5; year++)
    {
        for (month=0, subtot=0; month<12; month++)
        {
            subtot=subtot+rain[year][month];
        }
        printf("%d \t\t %f\n", 2010+year, subtot);
        total = total + subtot;
    }
    
    //calculating average yearly rainfall
    printf("\nthe average yearly rainfall is %f \n", total/5);
    
    //calculating average rainfall for each month
    printf("\nthe monthly averages are : \n");
    printf("\njan\t\tfeb\t\tmarch\tapril\tmay\t\tjune\tjuly\taug\t\tsept\toct\t\tnov\t\tdec\n");
    for (month=0,total=0; month<12; month++)
    {
        for (year=0, subtot=0; year<5; year++)
        {
            subtot=subtot+rain[year][month];
        }
        printf("%4.1f\t", subtot/5);
    }
    printf("\n");
    return 0;
}

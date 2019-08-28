//
//  task3.c
//  
//
//  Created by Rishi Bolinjkar on 25/08/19.
//

#include <stdio.h>
int main()
{
    float a,b,c,sum,avg;
    printf("Enter marks of student in three subjects:\n");
    scanf("%f%f%f",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("Total marks obtained are:  %0.2f",sum);
    printf("\nAverage of the marks obtaine is:  %0.2f\n", avg);
    
    return 0;
}

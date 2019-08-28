//
//  task2.c
//  
//
//  Created by Rishi Bolinjkar on 25/08/19.
//

#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in degree Celcius:  ");
    scanf("%f", &c);
    f=(c*9)/5+32;
    printf("The temperature in Farenheit is:  %f\n", f);
    
    return 0;
    
}

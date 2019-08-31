//
//  task12.c
//  
//
//  Created by Rishi Bolinjkar on 31/08/19.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c,n;
    int ch;
    printf("Menu\n");
    printf("----\n");
    printf("1) Celcius to Farenheit. \n2)Farenheit to Celcius. \n3)Exit.");
    printf("\n------------------------");
    do{
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: {
                printf("Enter temperature in Celcius: ");
                scanf("%f", &n);
                f=(n*9/5)+32;
                printf("\nTemperature in farenheit is: %0.2f", f);
                    break;
            }
            case 2: {
                printf("Enter temperature in Farenheit: ");
                scanf("%f", &n);
                c=(n-32)*5/9;
                printf("\nTemperature in celcius is: %0.2f", c);
                break;
            }
            default:
                exit(0);
        }
    } while(n!=3);
    return 0;
}


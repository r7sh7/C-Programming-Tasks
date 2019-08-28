//
//  task4.c
//  
//
//  Created by Rishi Bolinjkar on 25/08/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char f[20], l[20], fl[40];
    printf("Enter first name: ");
    scanf("%s", f);
    printf("Enter last name: ");
    scanf("%s", l);
    strcpy(fl,f);
    strcat(fl," ");
    strcat(fl,l);
    printf("\nThe full name is %s\n", fl);
    
    return 0;
}

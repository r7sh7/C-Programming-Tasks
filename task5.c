//
//  task5.c
//  
//
//  Created by Rishi Bolinjkar on 26/08/19.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n, remainder, rev_int=0;
    printf("Enter the number you want to reverse:  ");
    scanf("%d", &n);
    for(i=n;i!=0;i=i/10)
    {
        remainder=i%10;
        rev_int= rev_int*10+remainder;
    }
    printf("\nThe reversed integer is: %d \n", rev_int);
    return 0;
}

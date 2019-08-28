//
//  task9.c
//  
//
//  Created by Rishi Bolinjkar on 28/08/19.
//

#include <stdio.h>

int main()
{
    int i,n,fact=1;
    printf("Enter a number :  ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("Factorial of the number is :  %d\n" ,fact);
    return 0;
}

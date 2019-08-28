//
//  task8.c
//  
//
//  Created by Rishi Bolinjkar on 28/08/19.
//

#include <stdio.h>
int main()
{
    int i,num,val;
    printf("Input a number: ");
    scanf("%d", &num);
    printf("\nMultiplication Table for %d", num);
    printf("\n----------------------------\n");
    for(i=0;i<=12;i++)
    {
        val=i*num;
        printf("%d  x  %d   =\t%d\n",num,i,val);
    }
    return 0;
}

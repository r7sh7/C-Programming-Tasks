//
//  task6.c
//  
//
//  Created by Rishi Bolinjkar on 26/08/19.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int i,num,remainder,n=0,numcopy,new_num=0;
    printf("Enter the number which has to be checked: ");
    scanf("%d", &num);
    numcopy=num;
    while(numcopy!=0)
    {
        numcopy=numcopy/10;
        ++n;
    }
    for(i=num;i!=0;i=i/10)
    {
        remainder=i%10;
        new_num+=pow(remainder,n);
    }
    if(new_num==num)
        printf("\nThe number %d is armstrong\n", new_num);
    else
        printf("\nThe input number is not armstrong\n");
    
    return 0;
}

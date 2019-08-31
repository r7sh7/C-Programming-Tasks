//
//  task13.c
//  
//
//  Created by Rishi Bolinjkar on 31/08/19.
//

#include <stdio.h>

int main()
{
    int i,n,min,max;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter array elements: ");
    for(i=0; i<n; i++)
        scanf("\n%d", &arr[i]);
    printf("Array elements are: ");
    for(i=0; i<n; i++)
        printf("\n%d", arr[i]);
    
    min=arr[0];
    max=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    printf("\nMax element is: %d", max);
    printf("\nMin element is: %d", min);
    return 0;
}

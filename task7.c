//
//  task7.c
//  
//
//  Created by Rishi Bolinjkar on 28/08/19.
//

#include <stdio.h>
#include <string.h>

int main()
{
    int l,h;
    char inp[20];
    printf("Enter the string to be checked:  ");
    scanf("%s", inp);
    l=0;
    h=strlen(inp)-1;
    while(h>l)
    {
        if(inp[l++]!=inp[h--])
        {
            printf("\nThe input string %s is not palindrome\n", inp);
            return 0;
        }
    }
    printf("\nString %s is palindrome\n", inp);
    return 0;
}

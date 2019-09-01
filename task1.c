//
//  task1.c
//  
//
//  Created by Rishi Bolinjkar on 25/08/19.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age;
    char name[20], phone[12];
    printf("Enter your first name:\n");
    scanf("%s", &name);
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Enter phone number:\n");
    scanf("%s", &phone);
    printf("\nDisplaying details:\n");
    printf("Name: %s\nAge: %d\nPhone number: %s\n", name, age, phone);
    return 0;
}

//
//  task11.c
//  
//
//  Created by Rishi Bolinjkar on 29/08/19.
//

#include <stdio.h>
#include <stdlib.h>
void read();
void display();
struct book
{
    char title[30];
    char author[20];
    char genre[10];
}s1;

int main()
{
    read();
    printf("\n");
    printf("Displaying details of book:\n");
    printf("--------------------------\n");
    display();
    return 0;
}

void read()
{
    printf("Enter the title of the book: ");
    scanf("%s", s1.title);
    printf("\nEnter author of the book: ");
    scanf("%s", s1.author);
    printf("\nEnter genre of the book: ");
    scanf("%s", s1.genre);
}

void display()
{
    printf("Title:  %s \nAuthor:  %s \nGenre:  %s\n", s1.title,s1.author,s1.genre);
}

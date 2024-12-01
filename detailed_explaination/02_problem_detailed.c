// Write a C program to print even numbers 

#include <stdio.h>

int main() 
{
    int i, a, b;

    // Get user input for the range
    printf("Enter the start of the range: ");
    scanf("%d", &a);

    printf("Enter the end of the range: ");
    scanf("%d", &b);

    // Display the range for clarity
    printf("Even numbers between %d and %d are:\n", a, b);

    // Loop through the range and print even numbers
    for (i = a; i <= b; i++) 
    {
        if (i % 2 == 0) 
        {  
            printf("%d\n", i);
        }
    }

    return 0; 
}


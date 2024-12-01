// Write a C program to print leap years 

#include <stdio.h>

int main() {
    int startingYear, endYear;

    // Prompt the user to enter the start and end year
    printf("Enter the start year: ");
    scanf("%d", &startingYear);
    printf("Enter the end year: ");
    scanf("%d", &endYear);

    // Print the leap years between the start and end years
    printf("Leap years between %d and %d are:\n", startingYear, endYear);

    // Loop through all the years from startingYear to endYear
    for (int year = startingYear; year <= endYear; year++) {
        // A year is a leap year if:
        // It is divisible by 4 but not divisible by 100, or it is divisible by 400
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);  // Print the leap year
        }
    }

    return 0;
}


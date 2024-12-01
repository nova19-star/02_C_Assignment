// Write a C program to print leap years 

#include <stdio.h>

int main() {
    int startingYear, endYear;

    printf("Enter the start year: ");
    scanf("%d", &startingYear);
    printf("Enter the end year: ");
    scanf("%d", &endYear);

    printf("Leap years between %d and %d are:\n", startingYear, endYear);

    for (int year = startingYear; year <= endYear; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);
        }
    }

    return 0;
}

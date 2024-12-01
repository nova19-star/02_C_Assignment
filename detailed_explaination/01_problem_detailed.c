// Write a C program to print 0 to 10 

#include <stdio.h>  

int main() {
    int a = 0;  // Declare and asign 'a' to 0, which will be used to store the current number. 

    // Start a loop that will print numbers from 0 to 10
    for (a = 0; a <= 10; a++) {  // Loop continues while 'a' is less than or equal to 10
        printf("%d\n", a);  // Print the current value of 'a'
    }
    return 0; 
}

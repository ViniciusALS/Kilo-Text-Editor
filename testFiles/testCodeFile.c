#include <stdio.h>

// Function prototypes
void printHello();
void printNumbers(int limit);
int isEven(int num);

int main() {
    printHello();
    
    int limit = 10;
    printNumbers(limit);

    return 0;
}

// Function to print "Hello, World!"
void printHello() {
    printf("Hello, World!\n");
}

// Function to print numbers from 1 to limit and check if they are even or odd
void printNumbers(int limit) {
    for (int i = 1; i <= limit; i++) {
        if (isEven(i)) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }
}

// Function to check if a number is even
int isEven(int num) {
    return num % 2 == 0;
}

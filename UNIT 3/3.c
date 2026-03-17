#include <stdio.h>

// Function to find maximum
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find minimum
int findMin(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;
    int (*funcPtr)(int, int);   // Function pointer

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Using function pointer for maximum
    funcPtr = findMax;
    printf("Maximum number = %d\n", funcPtr(x, y));

    // Using function pointer for minimum
    funcPtr = findMin;
    printf("Minimum number = %d\n", funcPtr(x, y));

    return 0;
}

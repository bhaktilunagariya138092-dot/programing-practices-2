#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;   // Store value of a in temp
    *a = *b;     // Assign value of b to a
    *b = temp;   // Assign temp to b
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Passing addresses of x and y
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

#include <stdio.h>

int addition(int x, int y);
int subtraction(int x, int y);

// This is the main function
int main() {
    int a, b; 
    a = 20; 
    b = 10;

    printf("%d + %d = %d\n", a, b, addition(a, b));
    printf("%d - %d = %d\n", a, b, subtraction(a, b));

    return 0;
}

int addition(int x, int y) {
    return x + y;
}

int subtraction(int x, int y) {
    return x - y;
}

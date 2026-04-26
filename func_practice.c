/*
Practice Problems 🎯
1. Write a function is_even(int n) that returns 1 if a number is even, 0 if odd
2. Write a function max(int a, int b) that returns the larger number
3. Write a function print_stars(int n) that prints n stars like *****
4. Write a function square(float n) that returns the square of a number
*/

#include <stdio.h>

int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else if (a < b) {
        return b;
    }
    else {
        return a;
    }
}

void print_stars(int n) {
    for (int i = 1; i <= n; i++) {
        printf("*");
    }
}

int square(int n) {
    return n * n;
}

int main() {
    printf("%d\n", is_even(5));
    printf("%d\n", max(51, 7));
    print_stars(5);
    printf("\n");
    int result = square(5);
    printf("%d\n", result);
    return 0;
}
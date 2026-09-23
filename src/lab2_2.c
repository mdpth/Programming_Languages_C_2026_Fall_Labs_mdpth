#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    // TODO: compute factorial iteratively
    long long fact = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fact = fact*i;
    } return fact;
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    // TODO: validate input, call function, print result
    if (n < 0) {
        printf("Error: Must be a non-negative integer.\n");
    } else {
        printf("%d! is equal to %lld\n", n, factorial(n));
    }
    return 0;
}

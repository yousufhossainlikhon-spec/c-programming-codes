#include <stdio.h>

int fibonacci(int i, int n, int a, int b, int c) {
    if (i > n) {
        return 0;
    }

    printf("%d ", a);
    c = a + b;
    a = b;
    b = c;

    return fibonacci(i + 1, n, a, b, c);
}

int main() {
    int a = 0, b = 1, c, n;

    printf("Enter number of terms ");
    scanf("%d", &n);

    fibonacci(1, n, a, b, c);

    return 0;
}


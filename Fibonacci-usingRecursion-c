#include <stdio.h>
void fibonacci(int i, int n, int a, int b, int c) {
    if (i == n) {
        printf("%d\n", a);
        return;
    }
    c = a + b;
    a = b;
    b = c;
    fibonacci(i + 1, n, a, b, c);
}
int main() {
    int a = 0, b = 1, c, n;
    printf("Enter number of terms ");
    scanf("%d", &n);
    fibonacci(1, n, a, b, c);
    return 0;
}

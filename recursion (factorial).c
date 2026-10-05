#include <stdio.h>

int factorial(int m) {
    if (m == 0 || m == 1) {
        return 1;
    }
    else {
        return m * factorial(m - 1);
    }
}

int main() {
    int n;
    printf("Enter a nuber for factorial:");
    scanf("%d",&n);
    printf("Factorial of %d is =%d\n",n,factorial(n));
    return 0;
}


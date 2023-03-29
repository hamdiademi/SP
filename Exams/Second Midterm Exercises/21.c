#include <stdio.h>


int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int is_strong_number(int n) {
    int original_n = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    return sum == original_n;
}

int main() {
    int n;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Strong numbers:\n");
    for (int i = 0; i < n; i++) {
        if (is_strong_number(numbers[i])) {
            printf("%d\n", numbers[i]);
        }
    }
    return 0;
}
//g

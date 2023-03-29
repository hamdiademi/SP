#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n, i, j, count = 0;

    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0, j = n - 1; i < j; i++, j--) {
        if (a[i] < a[j]) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            count++;
        }
        a[i] = max(a[i], a[j]);
        a[j] = a[i];
    }

    printf("%d\n", count);
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
//g

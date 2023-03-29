#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int index;
    int min_sum = 100000;
    for (int j = 0; j < n; j++) {
        int col_sum = 0;
        for (int i = 0; i < m; i++) {
            col_sum += a[i][j];
        }
        if (col_sum < min_sum) {
            index = j;
            min_sum = col_sum;
        }
    }

    printf("%d\n", index);

    return 0;
}

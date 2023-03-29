#include <stdio.h>
#define MAX 100

int main() {
    int a[MAX][MAX], b[MAX][MAX];
    int  n, m, sum;

    scanf("%d%d", &n, &m);


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum = 0;
            if (i > 0 && a[i - 1][j] > 0) { // to top
                sum += a[i - 1][j];
            }
            if (j > 0 && a[i][j - 1] > 0) { // to left
                sum += a[i][j - 1];
            }
            if (i < n - 1 && a[i + 1][j] > 0) { // to bottom
                sum += a[i + 1][j];
            }
            if (j < m - 1 && a[i][j + 1] > 0) { // to right
                sum += a[i][j + 1];
            }
            b[i][j] = sum;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

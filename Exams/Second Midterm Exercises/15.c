#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                count++;
            }
        }
    }

    int diagonal_changes = 0;
    for (int i = 0; i < n; i++) {
        if (matrix[i][i] == 1) {
            diagonal_changes++;
        }
    }

    int result = count + diagonal_changes;
    printf("%d\n", result);
    return 0;
}

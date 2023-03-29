#include <stdio.h>

int main() {
    int m, n;

    scanf("%d %d", &m, &n);

    
    int matrix[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
   for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int count_row = 0, count_col = 0;

            for (int k = 0; k < n; k++) {
                if (matrix[i][k] % 2 == 0 && matrix[i][k]!=matrix[i][j]) {
                    count_row++;
                }
            }
            for (int k = 0; k < m; k++) {
                if (matrix[k][j] % 2 == 0 && matrix[k][j]!=matrix[i][j]) {
                    count_col++;
                }
            }
            if (count_row + count_col > 1) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}

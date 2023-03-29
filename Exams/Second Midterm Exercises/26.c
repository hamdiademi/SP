#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n],b[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    //transform a to b
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            int sum = 0;
            if (a[i][j] == 1) {
                b[i][j] = a[i][j];
                continue;
            }
            if (i - 1 >= 0 && a[i - 1][j] == 1) { // to above
                sum++;
            }
            if (j - 1 >= 0 && a[i][j - 1] == 1) {// to left
                sum++;
            }
            if (i + 1 < n && a[i + 1][j] == 1) { //to bottom
                sum++;
            }
            if (j + 1 < n && a[i][j + 1] == 1) { // to right
                sum++;
            }
            //
            if (sum >= 3) {
                b[i][j] = 1;
            } else {
                b[i][j] = a[i][j];
            }

        }

    }
    //
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

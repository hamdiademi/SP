#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < n; ++j) {
        int mid=m/2;
        int sum1=0,sum2=0;
        for (int i = 0; i < mid; ++i) {
            sum1+=matrix[i][j];
        }
        for (int i = mid+(m%2==0 ? 0:1); i < m ; ++i) {
            sum2+=matrix[i][j];
        }
        int diff = abs(sum1-sum2);
        if(m%2==0){
            matrix[mid][j]=diff;
            matrix[mid-1][j]=diff;
        } else{
            matrix[mid][j]=diff;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

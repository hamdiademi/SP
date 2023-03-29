#include <stdio.h>

void above(int matrix[100][100],int n){
    int min = matrix[1][0];
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if(matrix[i][j]<min){
                min=matrix[i][j];
            }
        }
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            matrix[i][j]=min;
        }
    }
}

void below(int matrix[100][100],int n){
    int max= matrix[0][1];
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if(matrix[j][i]>max){
                max=matrix[j][i];
            }
        }
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            matrix[j][i]=max;
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int matrix[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&matrix[i][j]);
        }
    }

    above(matrix,n);
    below(matrix,n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}

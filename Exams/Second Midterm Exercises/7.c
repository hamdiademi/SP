#include <stdio.h>


int main(){
int n,m;
    scanf("%d%d",&n,&m);
    int matrix[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d",&matrix[i][j]);
        }
    }
    int n1,m1;
    scanf("%d%d",&n1,&m1);

    if(matrix[n1][m1]==0){
        int i=n1,j=m1;

        while(matrix[i][j]!=1&&j!=m) {
            matrix[i][j] = 1;
            j++;
        }
        matrix[n1][m1]=0;
        i=n1;
        j=m1;
        while(matrix[i][j]!=1&&j!=-1) {
            matrix[i][j] = 1;
            j--;
        }
        matrix[n1][m1]=0;
        i=n1;
        j=m1;
        //
        while(matrix[i][j]!=1&&i!=n) {
            matrix[i][j] = 1;
            i++;
        }
        matrix[n1][m1]=0;
        i=n1;
        j=m1;
        while(matrix[i][j]!=1&&i!=-1) {
            matrix[i][j] = 1;
            i--;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}

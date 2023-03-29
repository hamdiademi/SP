#include <stdio.h>


int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int matrix[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d",&matrix[i][j]);
        }
    }

    int res=0;
    for (int i = 0; i < n; ++i) {
        int count=0;
        for (int j = 0; j < m; ++j) {

            if(matrix[i][j]== 1){
                count++;
            }
            else{
                count=0;
            }
            if(count==3){
                res++;
                break;


            }
        }

    }

    for (int i = 0; i < m; ++i) {
        int count=0;
        for (int j = 0; j < n; ++j) {

            if(matrix[j][i]== 1){
                count++;
            }
            else{
                count=0;
            }
            if(count==3){
                res++;
                break;

            }
        }

    }
    printf("%d",res);
    return 0;
}

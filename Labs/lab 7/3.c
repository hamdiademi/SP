#include <stdio.h>

int main() {
    int n,x,y;
    scanf("%d",&n);
    if(n%2==1){printf("ERROR"); return 0;}

    int matrix[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }


    x=y=0;
    for(int i=n-1;i>=n/2;i--){
        for(int j=0;j<n;j++){
            matrix[x][y]+=matrix[i][j];
            y++;
        }
        y=0;
        x++;
    }
    x=y=0;
    for(int i=0;i<n/2;i++){
        for(int j=n-1;j>= n/2;j--){
            matrix[x][y]+=matrix[i][j];
            y++;
        }
        y=0;
        x++;
    }

    for(int i=0;i<n/2;i++) {
        for (int j = 0; j < n / 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }



    return 0;

}

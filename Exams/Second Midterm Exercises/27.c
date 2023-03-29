#include <stdio.h>

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int occure=0;
            for (int k = 0; k < m; ++k) {
                if(a[i][j]==a[i][k]){
                    occure++;
                }
            }
            if(occure==1){
                printf("%d ",a[i][j]);
                flag=0;
            }

        }
    }
    if(flag){
        printf("N");
    }


    return 0;
}

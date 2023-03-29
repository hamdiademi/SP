#include <stdio.h>
int main(){
    int n,count=0,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for (int j = 0; j < n; j++) {
            printf("+");
        }
        if(flag){
            return 0;
        }
        printf("\n");
        for (int l = 0; l < n - 2; l++) {
            printf("+");

            for (int k = 0; k < n - 2; k++) {
                printf("-");
            }

            printf("+");
            printf("\n");
        }
        flag=1;
    }


    return 0;
}



//#include <stdio.h>
//void square (int n){
//    int i, j;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            if (i == 0 || i == n-1 || j == 0 || j == n-1) {
//                printf("+");
//            } else {
//                printf("-");
//            }
//        }
//        printf("\n");
//    }
//}
//int main() {
//    int n;
//    scanf("%d",&n);
//    square(n);
//
//    return 0;
//}

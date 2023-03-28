#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[100],b[100],c[100];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int k;
    scanf("%d",&k);

    int countb=0,countc=0;

    for(int i=0;i<n;i++){
        if(a[i]<k){
            b[countb]=a[i];
            countb++;
        }
        else if(a[i]>=k){
            c[countc]=a[i];
            countc++;
        }
    }

    for(int i=0;i<countb;i++){
        printf("%d ",b[i]);
    }
    for(int i=0;i<countc;i++) {
        printf("%d ", c[i]);
    }

    return 0;
}

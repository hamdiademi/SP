#include <stdio.h>

void transform(int array[],int n){
    for (int i = 0; i < n; ++i) {
        if(array[i]==array[i+1]){
            array[i]+=array[i];
            array[i+1]=0;
        }
    }

}
void reorder(int array[],int n){

    for (int i = 0; i < n; ++i) {
        if(array[i]!=0){
            printf("%d ",array[i]);
        }
    }
    for (int i = 0; i < n; ++i) {
        if(array[i]==0){
            printf("%d ",array[i]);
        }
    }
}


int main() {
    int n;
    scanf("%d",&n);
    int array[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&array[i]);
    }

    transform(array,n);
    reorder(array,n);

    return 0;
}

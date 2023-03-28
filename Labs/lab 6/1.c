#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int array[100];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        if(array[i]%2==1){
            array[i]--;
        }
        else if(array[i]%2==0){
            array[i]++;
        }
        printf("%d ", array[i]);
    }


    return 0;
}

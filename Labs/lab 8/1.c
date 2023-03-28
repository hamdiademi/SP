#include <stdio.h>
void star (int nr){
    if(nr==0){
        return;
    }else {

        for (int i = 0; i < nr; i++) {
            printf("*");
        }
        printf("\n");
        star(nr-1);
    }



}

int main() {
    int nr;
    scanf("%d",&nr);
    star(nr);

    return 0;
}

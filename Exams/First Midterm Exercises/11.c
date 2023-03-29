#include <stdio.h>

int main() {
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++){
        int nr1=i%10;
        int nr2=i/10%10;
        int nr3=i/100%10;
        int nr4=i/1000%10;

        if(nr1%2==0&&nr2%2==0&&nr3%2==0&&nr4%2==0){
            printf("%d",i);
            return 0;
        }

    }printf("NSN");
    return 0;
}

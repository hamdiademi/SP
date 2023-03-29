#include <stdio.h>
int lastfirst(int number){
    int res=0;
    int tmp=number;
    int lastdigit = number % 10;
    while(tmp/=10) {
         lastdigit = lastdigit * 10;
        res = lastdigit + number / 10;
    }return res;
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        a= lastfirst(a);

        if(a>b){
            printf("YES\n");
        } else {
            printf("NO\n");
        }


    }
    return 0;
}

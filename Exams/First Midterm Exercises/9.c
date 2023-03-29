#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    if(sum>180){
        printf("NO");
    }
    else if(a==90||b==90){
        printf("YES\nRIGHT");
    }
    else if(a>90&&a<=180){
        printf("YES\nOBTUSE");
    }
    else if(a<90&&a>=0){
        printf("YES\nACUTE");
    }
    return 0;
}

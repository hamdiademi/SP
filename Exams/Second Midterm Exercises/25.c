#include <stdio.h>
int first(int n){
    int rev=1;
    while(n!=0){
        int tmp=n%10;
        rev= rev*10+tmp;
        n/=10;
    }
    return rev%10;
}

int main() {
    int n;
    scanf("%d",&n);
    int a[100];
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    int lastdigit,firstdigit;
    int flag=1;
    for (int i = 0; i < n; i++) {
        lastdigit=a[i]%10;
        firstdigit=first(a[i]);
        if(firstdigit%2==1&&lastdigit%2==0){
            printf("%d\n",a[i]);
            flag=0;
        }
    }
    if(flag){
        printf("No such elements!");
    }


    return 0;
}

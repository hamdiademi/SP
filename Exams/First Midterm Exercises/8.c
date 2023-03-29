#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0,countall=0;
    int a,b;
    while(scanf("%d%d",&a,&b)){
        if(a==0&&b==0){
            break;
        }
        countall++;
        if((a+b)==n){
            count++;
        }

    }
    printf("You entered %d pair of numbers whose sum is %d\n"
           "The percentage of pairs with sum %d is %.2f%%", count,n,n,((float)count/(float)countall)*100);
    return 0;
}

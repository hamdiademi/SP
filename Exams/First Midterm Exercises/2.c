#include <stdio.h>
#include <math.h>
int countdigit(int i){
    int count=0;
    while(i!=0){
        i/=10;
        count++;
    }
    return count;
}
int middlenumber(int n){
    int prod=1;
    while(n!=0){
        int n1;
        n1=n%10;
        if(n1==0){
            return 0;
        }
        prod*=n1;
        n/=10;
    }
    return prod;
}
int main() {
    int m,n,count=0;
    scanf("%d%d",&m,&n);

    int first,middle,last;
    int mid,firstlast;

    for(int i=m;i<n;i++){
        int digit = countdigit(i); // count digit of every number

        first = i / (int) pow(10, digit - 1);
        last = i%10;
        middle=i / 10 % (int)pow(10,digit-2);

        if(countdigit(middle) != digit-2){   // count digit of middle number
            continue;                        // checking if middle number is reading '0' if not will continue
       }
         mid = middlenumber(middle); // function for product of middle numbers
         firstlast=(first*10)+last;    // fist with last number

        for(int j=1;j<13;j++){
                if (mid == (firstlast * j)) {
                    printf("%d -> (%d == %d * %d)\n",i, mid, firstlast, j);
                    count++;
                    break;
                }
            }
    }
    printf("%d",count);
    return 0;
}

#include <stdio.h>
int sumofnr(int n){
    int sum=0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;

}
int main() {
    int n,max=0, nr;
    scanf("%d", &n);
    for (int i = 1 ;i < n; i++) {

        int sum = sumofnr(i);
        if (sum > max) {
            max = sum;
            nr = i;
        }

    }
    printf("%d",nr);
    return 0;
}

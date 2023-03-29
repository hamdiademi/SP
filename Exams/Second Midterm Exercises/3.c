#include <stdio.h>

//int count(int number){
//    int last = number % 10;
//    int count=0;
//    while (number){
//        if(number%10==last){
//            count++;
//        }
//        number/=10;
//    }
//    return count;
//}
int countrec(int n, int last) {
    if (n == 0) {
        return 0;
    }
    int current_digit = n % 10;

    int count = countrec(n / 10, last);

    if (current_digit == last) {
        count++;
    }
    return count;
}

int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        int last = array[i]%10;
        printf("%d ",countrec(array[i],last));
    }

    return 0;
}

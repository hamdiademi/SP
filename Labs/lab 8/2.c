#include <stdio.h>

int divisiblebyk(int number, int k) {
    if (number % k == 0) {
        return 1;
    }
    return 0;
}

int nextdivisiblebyk(int number, int k) {
    int i = number + 1;
    while (1) {
        if (divisiblebyk(i, k) == 1) {
            return i;
        }
        i++;
    }
}

int main(void) {
    int n,m, k;
    scanf("%d%d%d", &n,&m, &k);
    for(int i=n;i<=m;i++) {
        printf("Is %d divisible by %d? %d\n", i, k, divisiblebyk(i, k));
        printf("The first number larger than %d that is divisible by %d is %d\n", i, k, nextdivisiblebyk(i, k));
    }
    return 0;
}
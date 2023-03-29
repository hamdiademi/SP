#include <stdio.h>
#include <stdlib.h>

int parcom(int a) {
    if (a == 0) {
        return 0;
    }

    int last_digit = a % 10;
    int rest_of_the_number = parcom(a / 10);

    if (last_digit % 2 == 0){
        last_digit = (last_digit + 1);
    }
    else {
        last_digit = (last_digit - 1 );

    }
    return rest_of_the_number * 10 + last_digit;
}

int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    return x - y;
}

int main() {
    int numbers[100];
    int n = 0;
    int x;
    while (scanf("%d", &x) == 1) {
        numbers[n++] = parcom(x);
    }
    qsort(numbers, n, sizeof(int), compare);// or we can use bubble sort

    int count = n < 5 ? n : 5;
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}

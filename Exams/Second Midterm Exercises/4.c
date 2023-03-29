#include <stdio.h>


int count_even_positions(int num, int digit) {
    int count = 0;
    int position = 1;
    while (num > 0) {
        if (num % 10 == digit && position % 2 == 0) {
            count++;
        }
        num /= 10;
        position++;
    }
    return count;
}

int main() {
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) == 3) {
        int count_a = count_even_positions(a, c);
        int count_b = count_even_positions(b, c);
        if (count_a >= count_b) {
            printf("%d\n", a);
        } else {
            printf("%d\n", b);
        }
    }
    return 0;
}

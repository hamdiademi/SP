#include <stdio.h>

int countUniqueDigits(int num) {
    int freq[10] = {0}, uniqueCount = 0;

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        if (freq[digit] == 1) {
            uniqueCount++;
        }
        num /= 10;
    }

    return uniqueCount;
}

int main() {
    int maxUniqueCount = -1, maxUniqueNum = 0, num, uniqueCount;


    while (scanf("%d", &num)) {
        uniqueCount = countUniqueDigits(num);
        if (uniqueCount > maxUniqueCount) {
            maxUniqueCount = uniqueCount;
            maxUniqueNum = num;
        }
    }

    printf("%d\n", maxUniqueNum);

    return 0;
}

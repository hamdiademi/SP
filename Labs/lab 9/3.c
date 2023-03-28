#include <stdio.h>

double max(double *array, int n) {
    double max = *array;
    for (int i = 1; i < n; i++) {
        if (*(array + i) > max)
            max = *(array + i);
    }
    return max;
}

void func(double *array, int n) {
    double result = 100 / max(array, n);
    for (int i = 0; i < n; i++) {
        *(array + i) *= result;
    }
}

int main() {
    int n;
    double array[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%lf", &array[i]);

    func(array, n);

    for (int i = 0; i < n; i++)
        printf("%.2lf ", array[i]);

    return 0;
}
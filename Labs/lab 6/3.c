
//An integer N is read from SI. Afterwards N arrays of integers (with maximum length of 100 elements are read from SI).
//For each array,firstly the size of the array is read, and then the elemnts of the array.
//
//Your task is to write a program which for each array read from SI will print the perecentage of equal symmetric numbers in the array.
//Symmetric elements in an array are the first and the last,the second and element before the last,etc.
//
//If the array has odd number of elemnts, then the middle element is considered both symmetric and equal.

#include <stdio.h>

int main() {
    int n,m,count=0;
    scanf("%d",&n);

    int array[100];

    for(int i=0;i<n;i++) {
        scanf("%d", &m);
        for (int j = 0; j < m; j++) {
            scanf("%d", &array[j]);
        }

        for (int k = 0, l = m - 1; k < l; k++, l--) {
            if (array[k] == array[l]) {
                count+=2;
            }
        }

        if(m%2==1) {
            count++;
        }

        printf("\n%.2f%%",((float)count/(float)m)*100);
        count=0;

    }

    return 0;
}

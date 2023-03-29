#include <stdio.h>


int odd(int array[], int n) {
    if (n == 0) return 0;
    if (array[n-1] % 2 != 0) return 1 + odd(array, n-1);
    else return odd(array, n-1);
}

int main()
{
 int n;
    scanf("%d",&n);
    int array[100];
    int res;
    for (int i = 0; i < n; ++i) {
        scanf("%d",&array[i]);
    }
     res= odd(array,n);
    printf("%d",res);
    return 0;
}

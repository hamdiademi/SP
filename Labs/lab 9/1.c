#include <stdio.h>
void sort(int *x,int *y, int *z){
    int tmp;
    if(*x < *y){
        tmp = *x;
        *x = *y;
        *y = tmp;
    }
    if (*y < *z) {
        tmp = *y;
        *y = *z;
        *z = tmp;
    }

    if (*x < *y) {
        tmp = *x;
        *x = *y;
        *y = tmp;
    }



}
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    sort(&a,&b,&c);
    printf("%d %d %d\n", a, b, c);



    return 0;
}


//with pointer:

//#include <stdio.h>
//void sort(int *x,int *y, int *z){
//    int tmp;
//    if (*x <* y){
//        tmp = *x;
//        *x = *y;
//        *y = tmp;
//    }
//    if (*y < *z) {
//        tmp = *y;
//        *y = *z;
//        *z = tmp;
//    }
//
//    if (*x < *y) {
//        tmp = *x;
//        *x = *y;
//        *y = tmp;
//    }
//
//
//
//}
//int main() {
//    int x,y,z;
//    scanf("%d%d%d",&x,&y,&z);
//    sort(&x,&y,&z);
//    printf("%d %d %d\n", x, y, z);
//
//
//    return 0;
//}


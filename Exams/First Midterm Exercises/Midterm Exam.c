#include <stdio.h>

int main() {
    int h,m,s;
    char chr;

    scanf("%d %d %d",&h,&m,&s);
    scanf(" %c",&chr); //! space before %c to read char

    if(chr=='A'){
        if(h>=12&&h<=23){
            h-=12;
        }
    }
    if(chr=='P'){
        if(h>=0&&h<=11){
            h+=12;
        }
        if(h==24){
            h=0;
        }
    }
    printf("%.02d:%.02d:%.02d",h,m,s);
    return 0;
}


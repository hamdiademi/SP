#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;

    int sum=0,sum1=0;
    int tmp=0,count=0;

    while(scanf("%c", &ch)){
        if (isalpha(ch)|| isspace(ch)) {
            count=0;
            tmp=0;
            continue;
        }
        if(ch=='!'){
            break;
        }
        if(count){
            ch-=48;
            sum-=tmp;
            sum1+=tmp*10+ch;
        }
        if(isdigit(ch)){
            ch-=48;
            count=1;
            sum+=ch;
            tmp=ch;
        }
    }
    printf("%d",sum+sum1);

    return 0;
}
//short way:
//
//#include <stdio.h>
//
//int main() {
//    char c;
//    int sum = 0, num = 0;
//    while ((c = getchar()) != '!') {
//        if (c >= '0' && c <= '9') {
//            num = num * 10 + (c - '0');
//        } else {
//            sum += num;
//            num = 0;
//        }
//    }
//    sum += num;
//    printf("%d\n", sum);
//    return 0;
//}

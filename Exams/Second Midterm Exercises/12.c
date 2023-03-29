#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    scanf("%s",str);
    int flag=0,count=0;
    for (int i = 0; i < strlen(str); ++i) {
        if(isdigit(str[i])||flag==1) {
            if(isdigit(str[i])){
                count++;

            }
            flag = 1;
            printf("%c", str[i]);
            if(count==2){
                return 0;
            }
        }

    }
    if(flag==0){
        printf("No digits");
    }


    return 0;
}

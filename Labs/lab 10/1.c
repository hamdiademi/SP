#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s",str);

    int length = strlen(str);
    int mid = length/2;

    for(int i=0;i<mid;i++){
        char temp = str[i];
        str[i]=str[i+mid];
        str[i+mid]= temp;
    }
    printf("%s",str);

    return 0;

}
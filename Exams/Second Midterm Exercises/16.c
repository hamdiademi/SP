#include <stdio.h>
#include <ctype.h>

void writeToFile();

int main() {
    //  writeToFile();
    FILE *fp = fopen ("C:\\Users\\ssara\\Desktop\\ex\\text.txt","r");
    char ch;
    int flag;
    while((ch=fgetc(fp)) != EOF){

        if(isalpha(ch)){
            printf("%c",ch);
            flag=1;
        }
        if(isspace(ch)&&flag){
            printf("\n");
            flag=0;
        }
    }
    fclose(fp);
    return 0;
}

void writeToFile() {
    FILE *f = fopen("C:\\Users\\ssara\\Desktop\\ex\\text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

#include <stdio.h>
#include <string.h>
#define MAX 100


//ne menuvaj!
void wtf() {
    FILE *f = fopen("C:\\Users\\ssara\\Desktop\\courses_18\\sp.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void rff() {
    FILE *f = fopen("C:\\Users\\ssara\\Desktop\\courses_18\\output.txt", "r");
    char c;
    while((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
}

int main() {
   //wtf();
   FILE *fp= fopen("C:\\Users\\ssara\\Desktop\\courses_18\\output.txt", "r");

   int k;
    fscanf(fp,"%d",&k);
    char c;
    while ((c= fgetc(fp))!= EOF){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            for (int i = 0; i < k; ++i) {
                putc(c,fp);
            }
        }else{
            putc(c,fp);
        }
    }
    fclose(fp);
    //fclose(f);

   rff();
    return 0;

}
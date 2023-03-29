#include <stdio.h>
#include <ctype.h>
#define MAX 80

// Write the modified text to the file "sifra.txt"
void wtf() {
    // Open the file in write mode
    FILE *f = fopen("C:\\Users\\ssara\\Desktop\\courses_2\\sifra.txt", "w");
    char c;

    // Read characters from the standard input and write the modified text to the file
    while((c = getchar()) != EOF) {
        // Modify the character by coding it letter by letter
        if (isalpha(c)) {
            c = tolower(c);
            c = (c - 'a' + 3) % 26 + 'a';
        }
        // Write the modified character to the file
        fputc(c, f);
    }
    // Close the file
    fclose(f);
}

// Read and print the contents of the file "sifra.txt"
void rtf(){
    // Open the file in read mode
    FILE *f = fopen("C:\\Users\\ssara\\Desktop\\courses_2\\sifra.txt", "r");
    char ch;
    // Read characters from the file and print them
    while ((ch = fgetc(f)) != EOF) {
        printf("%c", ch);
    }
    // Close the file
    fclose(f);
}

int main() {
    // Call the functions to write the modified text to the file and print its contents
    wtf();
    rtf();

    return 0;
}

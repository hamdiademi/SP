#include <stdio.h>
#include <ctype.h>
#include <string.h>

//#define ALPHABET_SIZE 26
//#define ALPHABET_LOWER_START 97
//#define ALPHABET_UPPER_START 65

int main() {
    int n, x;
    scanf("%d%d\n", &n, &x);

    for (int i = 0; i < n; i++) {
        char str[80];
        fgets(str, 80, stdin);

        for (int j = 0; j < strlen(str); j++) {
            char c = str[j];

            if (islower(c)) {
                str[j] = (c - 'a' + x) % 26 + 'a';
            } else if (isupper(c)) {              
                str[j] = (c - 'A' + x) % 26 + 'A';
            }
        }

        printf("%s", str);
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int n, k;
    char c, str[100];
    scanf("%d %d %c", &n, &k, &c);


    int found = 0;
    for(int i = 0; i < n; i++){

        fgets(str, 100, stdin);
        // remove newline character
        str[strcspn(str, "\n")] = 0;

        int count = 0;
        for(int j = 0; j < strlen(str); j++){

            if(tolower(str[j]) == tolower(c))
                count++;
        }

        if(count == k){
            found = 1;
            printf("%s\n", str);
        }
    }

    if(!found) {
        printf("NONE\n");
    }

    return 0;
}

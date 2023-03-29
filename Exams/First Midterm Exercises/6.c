#include <stdio.h>
int reverse(int number){
   int rev=0;
    while(number>0){
        int lastdiigt=number%10;
        rev=rev*10+lastdiigt;
        number/=10;
    } return rev;
}
int numberofdigit(int number){
    int digit=0;
    while(number>0){
        number/=10;
        digit++;

    }return digit;
}

int main() {
    int nr,digit,rev;
    scanf("%d",&nr);
      if(nr<9){
       printf("The number is invalid");
          return 0;
   }

    while(nr>=9) {
        if(nr>=990){
            continue;
        }

        rev = reverse(nr);
        digit = numberofdigit(nr);

        if (rev % digit == 0) {
            printf("%d", nr);
            return 0;
        }
        nr--;
    }

    return 0;
}
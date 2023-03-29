#include <stdio.h>

int main() {
   int todaydate,n;
    scanf("%d%d",&todaydate,&n);
    int yy1=todaydate%10000; //2018
    int mm1=todaydate/10000%100; //11
    int dd1=todaydate/1000000%100; //24

    for(int i=0;i<n;i++) {
        int newdate;
        scanf("%d", &newdate);
        int yy2 = newdate % 10000; //2000
        int mm2 = newdate / 10000 % 100; //11
        int dd2 = newdate / 1000000 % 100; //24

        int age = (yy1 - yy2);


        if (age >= 19){
            printf("YES\n");
        }


        else if (age == 18 && (dd1 >= dd2 && mm1 >= mm2)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }
    return 0;
}

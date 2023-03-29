#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        float points,max;
        scanf("%f%f",&points,&max);//10,20

        float prc=(points/max)*100;
        int grade;
        if(prc>=90){grade=10;}
        else if(prc>=80){grade=9;}
        else if(prc>=70){grade=8;}
        else if(prc>=60){grade=7;}
        else if(prc>=50){grade=6;}
        else if(prc<50){grade=5;}//{printf("%.2f FAIL",prc);break;}



        printf("%.2f ",prc);
         if (grade>5){
            printf("%d\n",grade);
        }

        else if (grade==5){
            printf("FAIL\n");
        }


    }
    return 0;
}

#include<stdio.h>

void main(){
    printf("Input the marks obtained in Physics,Chemistry,Math: ");
    int physics,chemistry,math;
    scanf("%d%d%d",&physics,&chemistry,&math);
    int total = 0;
    if (physics >= 65){
        total = total + physics;
    }
    if (chemistry >= 55){
        total = total + chemistry;
    }
    if (math >= 50){
        total = total + math;
    }
    if(total >= 180){
        printf("Candidate is eligible");
    }
    else{
        printf("candidate is not eligible");
    }

}

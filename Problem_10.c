#include<stdio.h>

void main(){
    printf("Input Year: ");
    int year;
    scanf("%d",&year);
    if(year % 4 == 0){
        printf("It's leap year");
    }
    else{
        printf("It's not leap year");
    }
}

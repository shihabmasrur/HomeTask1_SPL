#include<stdio.h>

void main(){
    printf("Input four numbers: ");
    int a,b,c,d;
    int sum = 0;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a % 2 == 0){
        sum = sum + a;
    }
    if(b % 2 == 0){
        sum = sum + b;
    }
    if(c % 2 == 0){
        sum = sum + c;
    }
    if(d % 2 == 0){
        sum = sum + d;
    }printf("%d",sum);
}

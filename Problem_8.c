#include<stdio.h>

void main(){
    printf("Input three integers: ");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a > b && a > c){
        printf("Maximum value is %d",a);
    }
    else if(b > c && b > a){
        printf("Maximum value is %d",b);
    }
    else if(c > b && c > a){
        printf("Maximum value is %d",c);
    }

}

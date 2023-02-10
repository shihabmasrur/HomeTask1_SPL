#include<stdio.h>

void main(){
    printf("Input Here: ");
    char a;
    scanf("%c",&a);
    if(a >= 33 && a <= 47){
        printf("It's a special charachter");
    }
    else if(a >=48  && a <=57){
        printf("Its a digit");
    }
    else if(a >=65  && a <=90){
        printf("Its a Capital Letter");
    }
    else if(a >= 97  && a <= 122){
        printf("Its a Small Letter");
    }


}

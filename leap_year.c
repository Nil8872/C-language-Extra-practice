# include<stdio.h>

int main(){
    int year;
    printf("Enter year:");\
    scanf("%d", &year);

    if(year%400==0){
        printf("%d year is Leap year", year);
    }
    else if(year%100 ==0){
        printf("%d year is Not leap year", year);
    }
    else if(year%4 ==0){
        printf("%d year is Leap year", year);
    }
    else{
        printf("%d year is Not leap year", year);
    }
    return 0;
}
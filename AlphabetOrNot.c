# include<stdio.h>

int main(){
    char c = '1';
    if((c>=97 && c<=122) || (c>65 && c<90)){
        printf(" charater is alphabet !");
    }
    else{
        printf(" charater is Not alphabet !");

    }
    return 0;
}
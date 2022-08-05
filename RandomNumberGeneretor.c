# include<stdio.h>
# include<stdlib.h>
# include<time.h>


int main(){
    int n,n1,n3;
    srand(time(NULL));
    n = rand()%3;
    n1 = rand()%10;
    n3 = rand()%50;
    printf("%d\n", n);
    printf("%d\n", n1);
    printf("%d\n", n3);
    return 0;
}
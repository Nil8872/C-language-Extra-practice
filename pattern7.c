# include<stdio.h>

int main(){
    int n =5;
    for(int i =1; i<n ; i++){
        for(int j=i; j<=n; j++){
            printf("  ");
        }
        for(int k=1; k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i =1; i<=n ; i++){
        for(int j=1; j<=i; j++){
            printf("  ");
        }
        for(int k=i; k<=n;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
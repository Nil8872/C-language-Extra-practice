# include<stdio.h>

int main(){
    int n = 10;
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<(n-i);j++){
            printf(" ");
        }

        for(int k=0; k<=i; k++){
            if(k%2==0 ){

            printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}
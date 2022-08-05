# include<stdio.h>

int main(){
    int row, i, j, s, coef;

    printf("Enter the value of row you want to print: ");
    scanf("%d", &row);

    for(int i =0 ; i<row; i++){
        for(int s=i ; s<row; s++){
            printf(" ");
        }
        for(int j=0 ; j<=i; j++){
            if(j==0){
                coef=1;
            }
            else {
                coef = (coef*(i-j+1))/j;
            }
            printf("%d ", coef);
        }
        printf("\n");

    }
    return 0;
}
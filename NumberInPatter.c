# include<stdio.h>

int main(){
    int n = 5;
    // char c[26] = {' ','A','B','C','D','E','F','G','H'};
    char st[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char * ptr = st; 
    for(int i=0 ; i<=n; i++){
        for(int k = 0 ; k<(n-i); k++){
            printf(" ");
        }
        for(int j = 0; j<=i; j++){
            printf("%c",*ptr);
            printf("%d ",i+1);

        }
        
            ptr++;
        printf("\n");
    }
    return 0;
}
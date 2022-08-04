# include<stdio.h>
# include<conio.h>

int maxValue(int *ptr){
    if(ptr[0] <ptr[1]){
        if(ptr[1]<ptr[2]){
            printf("The maximum number is %d\n",ptr[2]);
        }
        else{
            printf("The maximum number is %d\n", ptr[1]);
        }

    }
    else if(ptr[0] > ptr[1]){
        if(ptr[0]<ptr[2]){
            printf("The maximum number is %d\n",ptr[0]);
         }
        else{
            printf("The maximum number is %d\n",ptr[2]);
        
        }
    }
}

int main(){
    int arr[3];
    for(int i=0; i<3 ; i++){
        fflush(stdin);
        printf("Enter the value of element: %d\n",i+1);
        scanf("%d", &arr[i]);
    }

    int *ptr ;
    ptr = arr;
    maxValue(ptr);
    return 0;
}
# include<stdio.h>
# include<stdlib.h>

void inputElement(int * ptr, int n){
    for(int i =0 ; i<n; i++){
        printf("Enter %d element : ",i+1);
        scanf("%d", ptr);
        ptr++;
    }
}
void printElement(int * ptr, int n){
    for(int i =0 ; i<n; i++){

        printf("%d, ", *ptr);
    
        ptr++;
    }
}

int main(){
    
    int n;
    // int arr[100];
    int * ptr ;
    printf("how many number you want enter : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n*sizeof(int));
    free(ptr);
    if(ptr == NULL){
        printf("Memory is not allocate !\n");
    
    }
    else{
        printf("Memory has been successfully allocated !\n");
    }
    inputElement(ptr,n);
    printf("array is : ");
    printElement(ptr,n);
    printf("\n");
    // for largest number 
    int max=ptr[0];
    for(int i=0 ; i<n; i++){
        if(max<*(ptr+i)){
            max = *(ptr+i);
        }
    }
    printf("The maximum element is %d \n", max);

    int min=ptr[0];
    for(int i=0 ; i<n; i++){
        if(min>*(ptr+i)){
            min = *(ptr+i);
        }
    }
    printf("The minimum element is %d ", min);

    return 0;
}
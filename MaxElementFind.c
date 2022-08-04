# include<stdio.h>
int  maxValueFind(int * ptr, int size){
    int max= ptr[0];
    for(int i=0 ; i<size; i++){
        if(*ptr > max){
            max = *ptr;
        }
        ptr++;
    }
    return max;
}
int  minValueFind(int * ptr, int size){
    int min= ptr[0];
    for(int i=0 ; i<size; i++){
        if(*ptr <min){
            min =*ptr;
        }
        ptr++;
    }
    return min;
}

int main(){
    int arr[100];
    int*ptr = &arr[0];
    int max, size, min;
    printf("Enter the size of Array: ");
    scanf("%d", &size);

    for(int i =0; i<size; i++){
        printf("Enter the %d element \n", i+1);
        scanf("%d", &arr[i]);
    }
    max = maxValueFind(ptr,size);
    min = minValueFind(ptr,size);
    printf("The maximum number is %d\n", max);
    printf("The minimum number is %d\n", min);
    return 0;
}
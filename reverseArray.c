// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int* arrayOfnElement(int elementNumber,int start,int end){
    int *arr =(int *)  malloc(elementNumber * sizeof(int));
     srand(time(NULL));
    for(int i = 0; i <elementNumber; i++ ){
        *(arr + i) = start + (rand()% end) - start;
    }
    return arr;
    }
void reverseArray(int *arr, int length){
    int left = 0, rigth = length - 1;
    int temp;
    while(left < rigth){
        temp = arr[left];
        arr[left++] = arr[rigth];
        arr[rigth--] = temp;
    }
}

int main() {
    
    int *arr = arrayOfnElement(5,0,10);
    for(int i = 0; i < 5; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    reverseArray(arr,5);
    for(int i = 0; i < 5; i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}

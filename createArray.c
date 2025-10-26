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
    

int main() {
    
    int *arr = arrayOfnElement(5,0,10);
    for(int i = 0; i < 5; i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}

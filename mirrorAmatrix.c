#include <stdio.h>
void mirror(int col,int row,int arr[][col] );
int main() {
   
    int arr[5][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    mirror(4,5,arr);
    for(int i = 0; i < 5; i++){
        
        for(int j = 0; j < 4; j++){
            printf("%d\t",arr[i][j]);}
        printf("\n");    
    }
    return 0;
}

void mirror(int col,int row,int arr[][col] ){
    int temp;
    for(int i = 0; i < row ; i++){
        for(int j = col - 1,k = 0 ;k < col/2; j--,k++ ){
        temp = arr[i][k];
        arr[i][k] = arr[i][j];
        arr[i][j] = temp;}
    }
}

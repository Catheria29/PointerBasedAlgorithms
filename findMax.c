#include <stdio.h>
int findMax(int *arr,int length){
    int max = arr[0];
    for(int i = 0; i < length; i++){
        if(max < arr[i])
            max = arr[i];
    }
    return max;
}
int main() {
    int list[5] = {56,22,36,78,54};
    printf("%d",findMax(list,5));

    return 0;
}

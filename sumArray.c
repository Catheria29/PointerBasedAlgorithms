#include <stdio.h>
int sumArray(int *arr,int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum+=arr[i];
    }
    return sum;
}
int main() {
    int list[5] = {56,22,36,78,54};
    printf("%d",sumArray(list,5));

    return 0;
}

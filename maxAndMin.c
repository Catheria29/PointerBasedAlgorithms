
#include <stdio.h>

void maxAndMin(int[],int*,int*,int);
int main()
{
//max and min

	int arr[] = {1,5,3,7,87,44,322,6,8,9};
	int max,min;
	int size = sizeof(arr)/sizeof(arr[0]);
	maxAndMin(arr,&max,&min,size);
	printf("\n%d",max);
	return 0;
}



void maxAndMin(int arr[],int *max, int *min,int size){
   
   *max = arr[0];
   *min = arr[0];
   for(int i=0; i < size; i++){
       if(*max < arr[i]){
           *max = arr[i];
       }
       if(*min > arr[i]){
           *min = arr[i];
       }
   }
   printf("size is %d\n",size);
   printf("max = %d and min = %d",*max,*min);
}

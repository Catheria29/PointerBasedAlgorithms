#include <stdio.h>
#include <stdlib.h>
int* storingRandomNum(int size);
int main() {
   int age = 5;
   int *p_age = &age;
   printf("%d", *p_age);
   printf("\n%d", *(p_age+1));
   int *p_nums;
   p_nums = storingRandomNum(age); 
   for(int i = 0; i < age; i++){
        printf("\nYou Entered a random integer: %d", *(p_nums+i));
        
    }
return 0;
}

int* storingRandomNum(int size){
   int *list = (int*) malloc(size * sizeof(int));
    for(int i = 0; i < size; i++){
        printf("\nEnter a random integer: ");
        scanf("%d",(list+i));
    }
    return list;
}

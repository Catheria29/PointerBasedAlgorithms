#include <stdio.h>
void swap(int *,int *);
void maxAndMin(int[],int*,int*,int);
int main()
{//swap
 	int a = 5,b = 7;
 	printf("a is %d and b is %d", a,b);
	 int temp = a;
	 a = b;
	 b = temp;
     swap(&a,&b);
 	printf("\na is %d and b is %d", a,b);
	

	return 0;
}

void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

//reversing a string;
#include <stdio.h>
#include <stdlib.h>
char* stringReverser(char str[],int size){
    char *p = malloc(size + 1);
    int cnt = 0;
    for(int i = size -1; i >= 0; i--){
         *(p+cnt) = str[i];//p[i] = str[i]
        
        cnt++;
        }
        *(p+size) = '\0';
        
    return p;
       
}

int main()
{
    char str[] = "Hello World";
    int size = sizeof(str) / sizeof(str[0]);
    
    char *newStr = stringReverser(str,12);
    for (int i = 0; i < size; i++) {
        printf("%c\n", newStr[i]);
    }
    return 0;
}

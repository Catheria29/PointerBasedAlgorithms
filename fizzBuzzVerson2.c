#include <stdio.h>
void fizzBuzz(int num){
    
    if(num % 3 == 0){
        if(num % 5 == 0)
            printf("fizzBuz");
        else
            printf("Fizz");}
    else if(num % 5 == 0)
            printf("Buzz");
        else
            printf("%d",num);
    
    }
    

int main() {
    
     fizzBuzz(15) ;
    

    return 0;
}

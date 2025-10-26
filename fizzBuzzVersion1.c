#include <stdio.h>
char* fizzBuzz(int num){
    char *arr;
    if(num % 3 == 0){
        if(num % 5 == 0)
            arr = "FizzBuzz";
        else
            arr = "Fizz";}
    else if(num % 5 == 0)
            arr = "Buzz";
        else
            arr = "none";
    return arr;
    }
    

int main() {
    int list[5] = {56,22,36,78,54};
    char *sentence = fizzBuzz(4) ;
    printf("%s",sentence);

    return 0;
}

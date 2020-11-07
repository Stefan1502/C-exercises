//write a program to find the highest figure in a given number
//example: input 1264857 output: 8

#include <stdio.h>
int main(){

    int input;
    int max = 0;
    scanf("%d",&input);

    while(input!=0){
        if (input%10 > max){
            max = input%10;
        }
        input /= 10;
    }
    printf("max num is: %d",max);
}

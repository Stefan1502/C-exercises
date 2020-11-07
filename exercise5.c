//write a program that accepts number of inputs until the input cannot be interpreted
//and then calculates the lowest one

#include <stdio.h>
int main(){

    int input;
    int lowest;
    int flag;

    while(scanf("%d",&input)){
        if(flag){
            lowest = input;
            flag = 0;
        }
        else if(input < lowest){
            lowest = input;
        }
    }
    printf("lowest is %d", lowest);
}

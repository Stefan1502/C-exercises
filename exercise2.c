//write a program to find the highest figure on even position in a given number
//example: input 1269857 output: 8

#include <stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    int i;
    int max = 0;
    int tmp = input;

    for(i=0;tmp!=0;i++){
        if(tmp%10>max && i%2==0){
            max = tmp%10;
        }
        tmp /= 10;
    }
    printf("max figure in %d is %d",input,max);
}

//find the sum of all pair figures in a given number
//example - input 123456; output 12 + 23 + 34 + 45 + 56 = 170

#include <stdio.h>
int main(){

    int input;
    scanf("%d",&input);
    int tmp = input;
    int sum = 0;

    while(tmp>=10){
        sum += tmp%100;
        tmp /= 10;
    }
    printf("sum is %d", sum);
return 0;
}

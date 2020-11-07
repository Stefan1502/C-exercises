//find the lowest difference of pairs in given numbers
//ex 12 34 23543 32643 1 // output = 32642

#include <stdio.h>
#include <stdlib.h>

int main(){

    int input;
    int previous;
    int diff;

    if(scanf("%d%d",&previous,&input)){
        diff = abs(input-previous);
        while(scanf("%d",&input)){
            if((abs(input-previous))>diff){
                diff = abs(input-previous);
            }
            previous = input;}
    printf("diff is %d", diff);
}}

//zigzag number example 1426383

#include <stdio.h>

//1526384

int main(){

    int num;
    scanf("%d",&num);
    int tmp = num;
    int three;

    while(((tmp%10<(tmp/10)%10)&&((tmp/10)%10)>(tmp/100)%10)||((tmp%10>(tmp/10)%10)&&((tmp/10)%10)<(tmp/100)%10)||(tmp/10<10)){
        tmp/=10;
        if(tmp==0){
            printf("this number is zigzag");
            break;
        }}
}

//print chess table with given number
//ex input 3; output #_#
//                   _#_
//                   #_#

#include <stdio.h>
int main(){

    int n,i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i+j)%2){
                putchar('#');
            }
            else putchar('_');
        }
        putchar('\n');
    }
return 0;
}

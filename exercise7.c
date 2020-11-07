//Caesar's cipher, the shift cipher
//encrypt every letter with the nth right one
//example n = 2 -> a = c ; n = 3 -> a = d etc

#include <stdio.h>
#include <stdlib.h>
int main(){

    int n;
    char c,r;

    while(scanf("%d%c",&n,&c)){
        if(islower(c)){
            r = 'a';
        }
        else if(isupper(c)){
            r = 'A';
        }
        printf("%c\n", (c-r+n)%26+r);
    }
}

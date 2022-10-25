#include<stdio.h>

void main(){
    int ip[5], i;

    ip[0] = 10;
    ip[1] = 20;
    ip[2] = 30;
    ip[3] = 40;
    ip[4] = 50;

    for(i=0; i<5; i++){
        printf("\n value of ip[%d] is %d",i, ip[i]);
    }
}

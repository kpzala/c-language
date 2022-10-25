#include<stdio.h>

void main(){
    int ip[10], i;
    for(i=0; i<10; i++){
        printf("\n enter value for ip[%d] : ",i);
        scanf("%d",&ip[i]);
    }
    for(i=0; i>10; i++){
        printf("\n value of ip[%d] is %d",i, ip[i]);
    }

}

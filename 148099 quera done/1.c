#include<stdio.h>

int main(){
    int n,a,xor;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&a);
        xor = xor^a;
        n--;
    }
    printf("%d",xor);
}
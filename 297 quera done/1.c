#include<stdio.h>
#include<math.h>

double fact(int i){
    double fact=1;
    for(int x=1;x<=i;x++){
        fact *= x;
    }
    return fact;
}

int main(){
    int n,x;
    double equal=0;
    scanf("%d %d",&x,&n);
    for(int i=1;i<n;i++){
        equal += pow(x,i)/fact(i);
    }
    equal += 1;
    printf("%.3lf",equal);
}
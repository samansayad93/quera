#include<stdio.h>
#include<math.h>

int prime(int a){
    int i=2;
    if(a == 1){
        return 0;
    }
    while(i<=sqrt(a)){
        if(a%i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    int n,a,temp,flag = 1,q;
    scanf("%d",&n);
    a = pow(10,n-1);
    while(a<pow(10,n)){
        q = a/pow(10,n-1);
        if(prime(q)){
            if(prime(a)){
                temp = a;
                temp /= 10;
                while(temp>0){
                    if(prime(temp) == 0){
                        flag = 0;
                        break;
                    }
                    temp /= 10;
                }
                if(flag == 1)
                    printf("%d\n",a);
            }
            flag = 1;
            a++;
        }
        else{
            a += pow(10,n-1);
            //printf("yes\n");
        }
    }
}
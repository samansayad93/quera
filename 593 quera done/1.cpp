#include<iostream>
#include<math.h>

using namespace std;

bool prime(long a){
    if(a == 0 || a== 1){
        return 0;
    }
    for(int i=2;i<=sqrt(a);i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    long n;
    cin>>n;
    long tmp = n;
    long a = 0;
    while(tmp > 0){
        a += tmp%10;
        tmp /= 10;
    }
    for(long i = n+1;;i++){
        if(prime(i)){
            a--;
        }
        if(a == 0){
            cout<<i<<endl;
            return 0;
        }
    }
}
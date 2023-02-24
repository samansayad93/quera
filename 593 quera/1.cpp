#include<iostream>
#include<math.h>

using namespace std;

long primme(long a){
    while (true)
    {
        int flag =0;
        long i = 2;
        while(i<sqrt(a)){
            if(a%i == 0){
                flag =1;
                break;
            }
            i++;
        }
        if(flag == 0){
            return a;
        }
        a++;
    }
}

long check(long a,long n){
    long prime,temp;
    prime = a;
    for(long i=0;i<n;i++){
        temp = prime+1;
        prime = primme(temp);
    }
    return prime;
}

int main(){
    long n,temp,total=0;
    cin>>n;
    temp = n;
    while(temp>0){
        total += temp%10;
        temp /= 10;
    }
    cout<<check(n,total)<<endl;
}
#include<iostream>

using namespace std;

int check(int n,int i){
    if(n%i == 0){
        cout<<n/i<<endl;
        return 1;
    }
    else{
        return 0;
    }
}

int prime(int n){
    int i=2,flag=0;
    while(i<=n){
        for(int j=2;j<i;j++){
            if(i%j == 0){
                flag =1;
                break;
            }
        }
        if(flag == 0){
            if(check(n,i)){
                return 0;
            }
        }
        flag =0;
        i++;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    prime(n);
    return 0;
}
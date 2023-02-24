#include<iostream>
#include<math.h>

using namespace std;

int prime(int n){
    if(n == 1){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(prime(n) && n%2 != 0){
        cout<<"zoj"<<endl;
    }
    else{
        cout<<"fard"<<endl;
    }
}
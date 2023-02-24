#include <iostream>

using namespace std;

int check(long long s){
    int count=0;
    for(int i=1;i<=s;i++){
        if(s%i == 0){
            count ++;
        }
    }
    return count;
}

int main(){
    long long k,i=1,s=0;
    long long flag=0;
    cin>>k;
    while(flag == 0){
        s += i;
        i++;
        //cout<<s<<endl;
        if(check(s) == k){
            flag = 1;
            break;
        }
    }
    cout<<s<<endl;
}
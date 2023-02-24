#include<iostream>

using namespace std;

int check(int n,int k){
    int turn = 1+k;
    int count = 1;
    while(turn%n != 1){
        turn += k;
        count++;
    }
    return count;
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<check(n,k)<<endl;
}
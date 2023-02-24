#include<iostream>

using namespace std;

void check(int n,int arr[]){
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            arr[0]++;
            arr[1] += i;
        }
    }
}

int main(){
    int n,arr[2]={0,0};
    cin>>n;
    for(int i=1;i<=n;i++){
        check(i,arr);
    }
    cout<<arr[0]<<' '<<arr[1]<<endl;
}
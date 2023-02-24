#include<iostream>

using namespace std;

int sort(int arr[],int n){
    int count = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[j] < arr[i]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[3000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = sort(arr,n);
    cout<<count<<endl;
}
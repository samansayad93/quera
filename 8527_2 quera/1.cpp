#include <iostream>

using namespace std;

int main(){
    int n,max=0;
    long sum = 0;
    cin>>n;
    int arr[100];
    int i=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }
    i=0;
    while(arr[i] != max){
        sum += max - arr[i];
        i++;
    }
    cout<<sum<<endl;
}
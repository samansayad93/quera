#include <iostream>

using namespace std;

void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    int sum=0;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr,n);
    if(sum > 200){
        sum -= 200;
    }
    else{
        sum -= sum;
    }
    cout<<sum<<" "<<arr[0]<<endl;
}
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int inp[10000];
    int arr[10000];
    int arr2[10000];
    long sum1=0,sum2=0;
    int m1,m2;
    for(int i=0;i<n;i++){
        cin>>inp[i];
    }
    m1 = inp[0];
    m2 = inp[0];
    for(int i=0;i<n;i++){
        arr[i] = -inp[i] + m1;
        m1 -= 3;
        sum1 += abs(arr[i]);
        arr2[i] = -inp[i] + m2;
        m2 += 3;
        sum2 += abs(arr2[i]);
    }
    if(sum1 <= sum2){
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                cout<<'+';
            }
            cout<<arr[i]<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr2[i]>0){
                cout<<'+';
            }
            cout<<arr2[i]<<endl;
        }
    }
}
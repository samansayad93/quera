#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long n,k;
    cin>>n>>k;
    vector<long> arr(n);
    for(long i=0;i<n;i++){
        cin>>arr[i];
        arr[i]++;
    }
    sort(arr.begin(),arr.end());
    long count =0;
    while(k>0){
        if(k >= arr[count]){
            k -= arr[count];
            count++;
        }
        else break;
    }
    cout<<count<<endl;
    return 0;
}
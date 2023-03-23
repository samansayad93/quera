#include<iostream>

using namespace std;

int check(string a){
    int count1 = 0;
    int count0 = 0;
    for(int i=0;i<a.length();i++){
        if(a[i] == '1'){
            count1++;
        }
        else{
            count0++;
        }
    }
    if(count1 >= count0){
        return count0;
    }
    return count1+1;
}

int main(){
    int n;
    cin>>n;
    string arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<check(arr[i])<<endl;
    }
}
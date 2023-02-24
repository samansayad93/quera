#include<iostream>

using namespace std;

string search(string arr[][2],string arr2,int n){
    for(int i=0;i<n;i++){
        if(arr[i][0] == arr2){
            return arr[i][1];
        }
    }
    return "";
}

int main(){
    int n,k;
    cin>>n>>k;
    string arr[10000][2],arr2[10000],temp;
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    for(int i=0;i<k;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<k;i++){
        temp=search(arr,arr2[i],n);
        if(temp == ""){
            cout<<"kachal!";
        }
        else{
            cout<<temp<<" kachal! ";
        }
    }
    cout<<endl;
}
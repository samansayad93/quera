#include<iostream>

using namespace std;

int main(){
    int n,a[100],k=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[k]){
            k = i;
        }
    }
    cout<<k+1<<endl;
}
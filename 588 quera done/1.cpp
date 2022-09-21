#include<iostream>

using namespace std;

int main(){
    int n,a,max1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>max1){
            max1=a;
        }
    }
    cout<<max1<<endl;
}

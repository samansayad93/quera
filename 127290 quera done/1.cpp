#include<iostream>

using namespace std;

int main(){
    int t;
    int n,s,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>s>>a;
        int temp = s+((n-1)*a);
        if(temp % n == 0 && temp/n>a){
            cout<<(temp/n)-a<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
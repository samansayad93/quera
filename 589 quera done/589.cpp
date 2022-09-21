#include<iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    int fact=a;
    for(int i=a-1;i>0;i--){
        fact=fact*(a-1);
        a--;
    }
    cout<<fact<<endl;
}

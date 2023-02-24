#include<iostream>

using namespace std;

int main(){
    int n;
    string s = "codecup6";
    cin>>n;
    if(n%8 == 0){
        cout<<s[7]<<endl;
    }
    else{
        cout<<s[(n%8)-1]<<endl;
    }
}
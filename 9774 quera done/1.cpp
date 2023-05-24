#include <iostream>
#include <math.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<":";
        int tmp = s[i]-48;
        for(int j=0;j<tmp;j++){
            if(j == 0) cout<<" ";
            cout<<s[i];
        }
        cout<<endl;
    }
}
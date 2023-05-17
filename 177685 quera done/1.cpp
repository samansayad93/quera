#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n;
    bool flag = false;
    cin>>n;
    string str;
    cin>>str;
    while(true){
        for(int i=0;i<str.length();i++){
            if(str[i] == str[i+1]){
                str.erase(i,2);
                flag = true;
                break;
            }
        }
        if(flag == false){
            cout<<str<<endl;
            return 0;
        }
        flag = false;
    }
}
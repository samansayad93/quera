#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int lenght = s.length();
    int count = 1,flag = 1;
    if(lenght == 1){
        cout<<"bad"<<endl;
        return 0;
    }
    for(int i=1;i<lenght;i++){
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            flag = 0;
        }
        if(flag == 0){
            if(count%2 != 0){
                cout<<"bad"<<endl;
                break;
            }
            else{
                flag = 1;
                count = 1;
            }
        }
    }
    if(flag == 1){
        cout<<"khoob"<<endl;
    }
}
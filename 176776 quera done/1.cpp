#include <iostream>

using namespace std;

int main(){
    string input;
    cin>>input;
    int count=0,tmp=0;
    for(int i=0;i<input.length();i++){
        if(input[i] == '0'){
            tmp++;
        }
        else{
            if(tmp > count){
                count = tmp;
            }
            tmp = 0;
        }
    }
    if(tmp > count){
        count = tmp;
    }
    cout<<count<<endl;
}
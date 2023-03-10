#include <iostream>

using namespace std;

int main(){
    string str[4];
    char arr[4];
    for(int i=0;i<4;i++){
        cin>>str[i]>>arr[i];
    } 
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i] == arr[j]){
                if(arr[i] == arr[j+1] || arr[i] == arr[j+2]){
                    cout<<str[j]<<endl;
                    return 0;
                }
                cout<<str[i]<<endl;
                return 0;
            }
        }
    }
}
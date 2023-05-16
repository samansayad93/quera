#include <iostream>

using namespace std;

int main(){
    int a[4],b[4];
    int count = 0;
    for(int i=0;i<4;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<2;i++){
        for(int j=2;j<4;j++){
            if(a[i] == a[j]){
                count++;
                continue;
            }
            if(b[i] == b[j]){
                count++;
            }
        }
    }
    if(count % 2 == 1){
        cout<<"happy"<<endl;
    }
    else{
        cout<<"unhappy"<<endl;
    }
}
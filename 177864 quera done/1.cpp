#include <iostream>

using namespace std;

int main(){
    string name[20000];
    int num[20000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name[i]>>num[i];
    }
    int index = 0;
    for(int i=0;i<n;i++){
        if(num[i] > num[index]){
            index = i;
        }
    }
    cout<<name[index]<<endl;
}
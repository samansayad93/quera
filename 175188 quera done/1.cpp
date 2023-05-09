#include <iostream>

using namespace std;

int check(string a){
    int count1 = 0,count11 = 0;
    int count0 = 0,count00 = 0;
    char tmp = '2';
    for(int i=0;i<a.length();i++){
        if(a[i] == '1'){
            count1++;
            if(a[i] != tmp){
                count11++;
            }
            tmp = a[i];
        }
        else{
            count0++;
            if(a[i] != tmp){
                count00++;
            }
            tmp = a[i];
        }
    }
    if(count11 >= count00){
        return count00;
    }
    return count11 + 1;
}

int main(){
    int n;
    cin>>n;
    string arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<check(arr[i])<<endl;
    }
}
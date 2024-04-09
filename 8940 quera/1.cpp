#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n,p,q;
    cin>>n>>p>>q;
    vector<string> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int count = 0;
    string temp1,temp2,temp3,temp4;
    for(int i=0;i<n;i++){
        temp1 = input[i].substr(0,p);
        temp3 = input[i].substr(input[i].length()-q,q);
        for(int j=i+1;j<n;j++){
            temp2 = input[j].substr(0,p);
            temp4 = input[j].substr(input[j].length()-q,q);
            if(temp1 == temp2 && temp3 == temp4){
                count++;
            }
        }
    }
    cout<<n-count<<endl;
}
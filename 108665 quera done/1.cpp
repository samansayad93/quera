#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main(){
    int count;
    string a;
    cin>>a;
    for(int i=0;i<6;i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            count++;
    }
    cout<<pow(2,count)<<endl;
}
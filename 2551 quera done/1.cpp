#include <iostream>
#include <string>

using namespace std;

int main(){
    string a,b;
    char c;
    cin>>a>>c>>b;
    if(c == '+'){
        int a1 = a.length()-1;
        long b1 = b.length()-1;
        if(a1 == b1){
            cout<<'2';
            for(int i=0;i<a1;i++){
                cout<<'0';
            }
            cout<<endl;
            return 0;
        }
        if(a1>b1){
            cout<<'1';
            for(int i=0;i<a1-b1-1;i++){
                cout<<'0';
            }
            cout<<'1';
            for(int i=0;i<b1;i++){
                cout<<'0';
            }
            cout<<endl;
            return 0;
        }
        if(a1<b1){
            cout<<'1';
            for(int i=0;i<b1-a1-1;i++){
                cout<<'0';
            }
            cout<<'1';
            for(int i=0;i<a1;i++){
                cout<<'0';
            }
            cout<<endl;
            return 0;
        }
    }
    else if(c == '*'){
        long a1 = a.length()-1;
        long b1 = b.length()-1;
        cout<<'1';
        for(int i=0;i<a1+b1;i++){
            cout<<'0';
        }
        cout<<endl;
    }
    return 0;
}
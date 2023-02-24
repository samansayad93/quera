#include<iostream>

using namespace std;

int check(string s){
    int count = 0;
    int lenght = s.length();
    for(int i=0;i<lenght;i++){
        switch (s[i])
        {
            case 'u':
            case 'e':
            case 'a':
            case 'o':
            case 'i':
                count++;
                break;
            default:
                break;
        }
    }
    return count;
}

int main(){
    string s;
    cin>>s;
    cout<<check(s)<<endl;
}
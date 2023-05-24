#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    bool ch[7]={false};
    int count = 0;
    for(int i=0;i<3;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>s;
            switch (s[0])
            {
            case 'S':
            case 's':
                ch[0] = true;
                break;
            case '1':
                ch[1] = true;
                break;
            case '2':
                ch[2] = true;
                break;
            case '3':
                ch[3] = true;
                break;
            case '4':
                ch[4] = true;
                break;
            case '5':
                ch[5] = true;
                break;
            case 'J':
            case 'j':
                ch[6] = true;
                break;
            default:
                break;
            }
        }
    }
    for(int i=0;i<7;i++){
        if(ch[i] == false){
            count++;
        }
    }
    cout<<count<<endl;
}
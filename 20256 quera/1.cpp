#include<iostream>

using namespace std;

int main(){
    int g=0,r=0,y=0;
    string a;
    cin>>a;
    for(int i=0;i<5;i++){
        switch (a[i])
        {
        case 'G':
            g++;
            break;
        case 'Y':
            y++;
            break;
        case 'R':
            r++;
            break;
        }
    }
    if(r>=3){
        cout<<"nakhor lite"<<endl;
    }
    else if(y>=2 && r>=2){
        cout<<"nakhor lite"<<endl;
    }
    else if(y == 5){
        cout<<"nakhor lite"<<endl;
    }
    else{
        cout<<"rahat baash"<<endl;
    }
}
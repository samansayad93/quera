#include<iostream>

using namespace std;

void ShowFibNth(long int n, long int n1){
    long int temp;
    if(n==1 && n1 == 1){
        cout<<1<<endl;
        return;
    }
    if(n>1){
        cout<<n<<endl;
        temp = n;
        n = n1 - n;
        n1 = temp;
        ShowFibNth(n,n1);
    }
    else{
        cout<<1<<endl<<1<<endl;
        return;
    }
}

int main(){
    long int n,n1;
    cin>>n>>n1;
    ShowFibNth(n,n1);
}
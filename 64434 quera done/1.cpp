#include<iostream>

using namespace std;

int main(){
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(i%2 == 1){
                for(int k=0;k<m;k++){
                    cout<<"X";
                }
                for(int k=0;k<m;k++){
                    cout<<".";
                }
                for(int k=0;k<m;k++){
                    cout<<"X";
                }
                cout<<endl;
            }
            else{
                for(int j=0;j<m;j++){
                    cout<<".";
                }
                for(int k=0;k<m;k++){
                    cout<<"X";
                }
                for(int k=0;k<m;k++){
                    cout<<".";
                }
                cout<<endl;
            }
        }
    }
}
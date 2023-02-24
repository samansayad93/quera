<<<<<<< HEAD
#include<iostream>

using namespace std;

int main(){
    int n,s[100],e[100],start,end,j=0,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i]>>e[i];
    }
    cin>>start>>end;
    a=start;
    while(a<=end){
        for(int i=0;i<n;i++){
            if(a>=s[i]&&a<=e[i]){
                j++;
                break;
            }
        }
        a++;
    }
    if(j!=0 && j == (end-start+1)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
=======
#include<iostream>

using namespace std;

int main(){
    int n,s[100],e[100],start,end,j=0,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i]>>e[i];
    }
    cin>>start>>end;
    a=start;
    while(a<=end){
        for(int i=0;i<n;i++){
            if(a>=s[i]&&a<=e[i]){
                j++;
                break;
            }
        }
        a++;
    }
    if(j!=0 && j == (end-start+1)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
>>>>>>> 9b92165495e12e6e51fcb6dbd9e7ee8b0d9e4712

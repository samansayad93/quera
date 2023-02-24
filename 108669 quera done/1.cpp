<<<<<<< HEAD
#include <iostream>

using namespace std;

int main(){
    int n,a,b;
    int arr[100];
    cin>>n>>a>>b;
    bool check=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>90+b){
            check = 1;
            break;
        }
        if(arr[i]>45+a){
            if(i != n-1){
                if(arr[i]>arr[i+1]){
                    check = 1;
                    break;
                }
            }
        }
    }
    if(check == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
=======
#include <iostream>

using namespace std;

int main(){
    int n,a,b;
    int arr[100];
    cin>>n>>a>>b;
    bool check=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>90+b){
            check = 1;
            break;
        }
        if(arr[i]>45+a){
            if(i != n-1){
                if(arr[i]>arr[i+1]){
                    check = 1;
                    break;
                }
            }
        }
    }
    if(check == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
>>>>>>> 9b92165495e12e6e51fcb6dbd9e7ee8b0d9e4712
}
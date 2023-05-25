#include<iostream>

using namespace std;

char check(char a,int i){
    if(i == 0){
        if ((int)a>=97&&(int)a<=122){
            a -= 32;
        }
        return a;
    }
    if(i == 1){
        if ((int)a>=65&&(int)a<=90){
            a += 32;
        }
        return a;
    }
}

int main(){
    int n;
    cin>>n;
    char arr[100];
    for(int i=0;i<n;i++){
        bool flag = false;
        cin.getline(arr,100);
        for(int j=0;j<100;j++){
            if (flag == false)
            {
                flag = true;
                arr[j] = check(arr[j],0);
            }
            if(flag = true){
                arr[j] = check(arr[j],1);
            }
            if(arr[j] == ' '){
                flag = false;
            }
            if(arr[j] == NULL){
                break;
            }
        }
        cout<<arr<<endl;
    }
}
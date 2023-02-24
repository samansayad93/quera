#include<iostream>


using namespace std;

int check(char answer,char lock[9]){
    int i=0;
    while(true){
        if(answer == lock[i]){
            return i;
        }
        i++;
    }
}

int main(){
    int n,total=0;
    cin>>n;
    char answer[n];
    for(int i=0;i<n;i++){
        cin>>answer[i];
    }
    char lock[n][9];
    for(int i=0;i<n;i++){
        for(int j=0;j<9;j++){
            cin>>lock[i][j];
            if(lock[i][j] == '\n'){
                j--;
            }
        }
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<9;j++){
            cout<<lock[i][j];
        }
        cout<<endl;
    }*/
    for(int i=0;i<n;i++){
        int temp = check(answer[i],lock[i]);
        if(9-temp < temp){
            total += 9-temp;
        }
        else{
            total += temp;
        }
    }
    cout<<total<<endl;
}
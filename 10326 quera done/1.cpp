#include<iostream>

using namespace std;

void backward(int arr[]){
    int temp;
    temp = arr[0];
    for(int i=0;i<3;i++){
        arr[i] = arr[i+1];
    }
    arr[3] = temp;
}

void func(int people[],int choclate[]){
    int i=0;
    people[i]++;
    choclate[i]--;
    while(choclate[i%4] != 0){
        i++;
        backward(choclate);
        people[i%4]++;
        choclate[i%4]--;
    }
}

int main(){
    int people[4]={0};
    int choclate[4];
    for(int i=0;i<4;i++){
        cin>>choclate[i];
    }
    func(people,choclate);
    for(int i=0;i<4;i++){
        cout<<people[i]<<' ';
    }
    cout<<endl;
}
#include<iostream>

using namespace std;

int main(){
    int m;
    string A0;
    string A[6];
    cin>>m;
    A[0]="Sib";
    A[1]="Senjed";
    A[2]="Somagh";
    A[3]="Samanoo";
    A[4]="Serkeh";
    A[5]="Sekeh";
    A[6]="Sonbol";
    for(int i=0;i<m;i++){
        cout<<A[i+1]<<endl;
    }
}

<<<<<<< HEAD
#include<iostream>

using namespace std;

void check(int *a,int *b){
    int x;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            x = ((a[i%5]+b[j%5])%10)*100;
            x+= ((a[(i+1)%5]+b[(j+1)%5])%10)*10;
            x+= (a[(i+2)%5]+b[(j+2)%5])%10;
            if(x%6 == 0){
                cout<<"Boro joloo :)"<<endl;
                return;
            }
        }
    }
    cout<<"Gir oftadi :("<<endl;
}

int main(){
    int a[5],b[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cin>>b[i];
    }
    check(a,b);
=======
#include<iostream>

using namespace std;

void check(int *a,int *b){
    int x;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            x = ((a[i%5]+b[j%5])%10)*100;
            x+= ((a[(i+1)%5]+b[(j+1)%5])%10)*10;
            x+= (a[(i+2)%5]+b[(j+2)%5])%10;
            if(x%6 == 0){
                cout<<"Boro joloo :)"<<endl;
                return;
            }
        }
    }
    cout<<"Gir oftadi :("<<endl;
}

int main(){
    int a[5],b[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cin>>b[i];
    }
    check(a,b);
>>>>>>> 9b92165495e12e6e51fcb6dbd9e7ee8b0d9e4712
}
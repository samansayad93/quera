#include<iostream>
#include<stdio.h>

using namespace std;

void sort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[j] < arr[j-1]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

}

void sort2(int arr[][3],int n){
    int temp1,temp2,temp3;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[j][0] < arr[j-1][0]){
                temp1 = arr[j][0];
                temp2 = arr[j][1];
                temp3 = arr[j][2];
                arr[j][0] = arr[j-1][0];
                arr[j][1] = arr[j-1][1];
                arr[j][2] = arr[j-1][2];
                arr[j-1][0] = temp1;
                arr[j-1][1] = temp2;
                arr[j-1][2] = temp3;
            }
        }
    }
}

int main(){
    int n,x=0;
    scanf("%d",&n);
    int arr[90];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(int i=1;i<n;i++){
        if(arr[i] == arr[i-1]){
            arr[i]=12345;
            x++;
            while(arr[i+1] == arr[i-1]){
                i++;
                arr[i] = 12345;
                x++;
            }
        }
    }
    sort(arr,n);
    int arr2[10000][3];
    int z=0;
    for (int i = 0; i < n-x; i++){
        for(int j=i+1;j<n-x;j++){
            arr2[z][0] = arr[j] - arr[i];
            arr2[z][1] = arr[i];
            arr2[z][2] = arr[j];
            z++;
        }
    }
    sort2(arr2,z);
    for(int i=0;i<z;i++){
        printf("[%d, %d]\n",arr2[i][1],arr2[i][2]);
    }
}
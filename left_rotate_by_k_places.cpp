#include<iostream>
using namespace std;

void left_rotate(int arr[],int n,int d){
    
    d=d%n;
    int temp[d];
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[(n-d)+i]=temp[i];
    }

}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]); 
    int k=3;
    left_rotate(arr,n,k);
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
} 
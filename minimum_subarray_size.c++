#include<iostream>
using namespace std;
int min_subaaray(int arr[],int n,int x){
    int sum=0,minlength=n+1,start=0,end=0;
    while(end<n){
        while(sum<=x && end<n){
            sum+=arr[end++];
        }
        while(sum>x && start<n){
            if(end-start<minlength){
                minlength=end-start;
            }
            sum-=arr[start++];
        }
    }
    return minlength;
}
int main(){
    int arr[]={2,3,1,2,4,3};
    int x=7;
    int n=6;
    int minlength=min_subaaray(arr,n,x);
    if(minlength==n+1){
        cout<<"nothinf fuck of"<<endl;

    }else{
        cout<<"smallest element is"<<minlength<<endl;
    }
}
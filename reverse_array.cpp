#include <iostream> 
using namespace std; 

void rvereseArray(int arr[], int start, int end, int n) 
{ 
	while (start < end) 
	{ 
		int temp=arr[start]; 
		arr[start]=arr[end]; 
		arr[end]=temp; 
		start++; 
		end--; 
	}
    for(int i=0; i<n;i++){
        cout<<arr[i];
    }
}

int main() 
{ 
	int arr[]={1,2,3,4,5,6}; 
	int n=sizeof(arr)/sizeof(arr[0]); 
	rvereseArray(arr,0,n-1,n); 
	return 0; 
} 

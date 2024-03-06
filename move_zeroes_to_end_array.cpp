#include<iostream>
using namespace std;

void descending(int n, int arr[]){
    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;     
            }
        }
    }
}

int main(){
    int arr[] = {0, 0, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]); 
    descending(n, arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

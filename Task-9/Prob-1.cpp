#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[7]={1,3,5,2,9,7,4};
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<< " ";
    }

    
    
}
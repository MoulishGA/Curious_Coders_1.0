#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of arr : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the alternate elements are : ";
    for(int i=0;i<n;i=i+2){
        cout<<arr[i]<<" ";
    }
}
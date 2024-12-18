#include<iostream>
using namespace std;
int main(){
    int n=5,i;
    int arr[5]={1,3,5,7,9};
    for(int i=0;i<n;i++){
        arr[i]=arr[i]+5;
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
        cout<<endl;
    }
    return 0;
}
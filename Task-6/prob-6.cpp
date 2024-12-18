#include<iostream>
using namespace std;
int main(){
    int n=5,i;
    int arr[5]={33,4,5,6,7};
    int small=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    cout<<small;
}
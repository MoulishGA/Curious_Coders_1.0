#include<iostream>
using namespace std;
int main(){
    int n=5,i;
    int arr[5]={3,4,5,6,33};
    int large=arr[0];
    for(i=1;i<n;i++){
        if(large < arr[i]){
            large=arr[i];
        }
    }
    cout<<large;
}
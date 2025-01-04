#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int n=4,x=30;
    int flag= -1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
        flag=1;
        cout<<i;
    }
    }
    
}
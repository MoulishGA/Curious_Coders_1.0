#include<iostream>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"enter the till num : ";
    cin>>n;
    for(int x=2;x<=n;x++){
        flag=0;
        for(int i=2;i<x;i++){
        if(x%i==0){
            flag=1;
        }
        }
    if(flag==0){
        cout<<x<<endl;
    }
    }
    
}
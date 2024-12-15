#include <iostream>
using namespace std;
int main(){
    int n,p=0;
    cout<<"enter the num : ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            p=1;
        }
    }
    if(p==0){
        cout<<"prime";
    }else{
        cout<<"not a prime";
    }
    return 0;
}
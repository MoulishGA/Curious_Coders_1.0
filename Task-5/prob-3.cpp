#include<iostream>
using namespace std;
int main(){
    int fact=1,i,n;
    cout<<"enter the num for fact : ";
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}
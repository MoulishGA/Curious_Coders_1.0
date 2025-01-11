#include<iostream>
using namespace std;
void printdiv(int n,int i){
    if(i>n){
        return;
    }
    if(n%i==0){
        cout<<i<<" ";
    }
    printdiv(n,i+1);
}
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    printdiv(n,1);
    return 0;
}
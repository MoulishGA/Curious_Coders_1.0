#include<iostream>
using namespace std;
int main(){
    int n,m,ld,digit=0;
    cout<<"enter the num : ";
    cin>>n;
    while(n>0){
        ld=n%10;
        digit=digit*10+(ld);
        n=n/10;
    }
    cout<<"The reverse of the given number : "<<digit<<endl;
}
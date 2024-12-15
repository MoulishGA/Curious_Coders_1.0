#include<iostream>
using namespace std;
int main(){
    int n,digit=0;
    cout<<"enter the num : ";
    cin>>n;
    while(n>0){
        digit++;
        n=n/10;
    }
    cout<<"The cout of digit is : "<<digit<<endl;
    return 0;
}
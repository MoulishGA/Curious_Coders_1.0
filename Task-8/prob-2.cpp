#include<iostream>
using namespace std;
int countzero(int n){
    if (n==0){
        return 1;
    }
    if(n<10){
        return 0;
    }
    return(n % 10==0 ? 1:0)+countzero(n%10);
}
int main(){
    int n;
    cout<<"enter the n : ";
    cin>>n;
    if(n==0){
        cout<<"The no of zero = 1"<<endl;
    }else{
        int result=countzero(n);
        cout<<"the no of zeros = "<<result<<endl;
    }
}
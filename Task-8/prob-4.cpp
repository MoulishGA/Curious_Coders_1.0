#include<iostream>
using namespace std;
int sumdigit(int n){
    if(n<10){
        return n;
    }
    return (n%10)+sumdigit(n/10);
}
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    if(n<10){
        cout<<n;
    }else{
        int result=sumdigit(n);
        cout<<"the sum : "<<result<<endl;
    }
    return 0;
}
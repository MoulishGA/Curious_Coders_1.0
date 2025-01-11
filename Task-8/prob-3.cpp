#include <iostream>
using namespace std;
int countdigit(int n){
    if(n==0){
        return 0;
    }
    return 1+countdigit(n/10);
}
int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;
    if(n==0){
        cout<<"0 numbers present ";
    }else{
        int result=countdigit(n);
        cout<<"the total digits are : "<<result<<endl;
    }
    return 0;
}
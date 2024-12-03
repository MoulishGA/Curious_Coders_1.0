#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num for pattern : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
        cout<<j<<" ";
        }
        cout<<""<<endl;
    }
}

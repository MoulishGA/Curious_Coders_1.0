#include <iostream>
using namespace std;
int main(){
    string fullname,firstname,lastname;
    int n;
    cout<<"enter the firstname : ";
    cin>>firstname;
    cout<<"enter the lastname : ";
    cin>>lastname;
    fullname=firstname+lastname;
    cout<<"enter the num of times to print : ";
    cin>>n;
    for(int i=0;i<=n;i++)
    cout<<fullname<<endl;
}
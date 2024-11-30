#include <iostream>
using namespace std;
int main(){
    int x,i;
    cout<<"enter a number : ";
    cin >>x;
    for(i=x;i<=1000;i+=x)
    {
        cout<<i<<endl;
    }
}
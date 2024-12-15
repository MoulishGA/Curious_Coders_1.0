#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int lastdigit=num%10;
    int firstdigit=num;
    while(firstdigit>=10){
        firstdigit=firstdigit/10;
    }
    cout<<"First digit : "<<firstdigit<<endl;
    cout<<"Last digit : "<<lastdigit<<endl;
    cout<<"First digit + Last digit is : "<<firstdigit+lastdigit;
}
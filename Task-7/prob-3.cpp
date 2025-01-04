#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter the size of arr : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in the arr : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool palindrome= true;
    for(int i=0;i<n/2;i++){
        if(arr[i] != arr[n-1-i]){
            palindrome = false;
            break;
    }
    }
    if(palindrome){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}

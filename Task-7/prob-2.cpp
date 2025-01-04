#include <iostream>
using namespace std;
int main(){
    int key,n;
    cout<<"enter the size of arr : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in arr : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key[index] : ";
    cin>>key;
    if(key >= 0 && key < n){
        cout<<"The inex entered is "<<key<<" the value in it is "<<arr[key]<<endl;
    }else{
        cout<<"key is out of index.";
    }
    return 0;
    
}
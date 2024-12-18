#include<iostream>
using namespace std;
int main(){
    int n=10,i,even=0,odd=0;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
        
    }
    cout<<odd<<endl;
    cout<<even;

    
}
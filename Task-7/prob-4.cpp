#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the number of element in arr1 : ";
    cin>>n1;
    cout<<"enter the number of element in arr2 : ";
    cin>>n2;
    int arr1[n1];
    int arr2[n2];
    cout<<"enter the elements in arr1 : ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"enter the element in arr2 : ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int maxarr1 = arr1[0];
    for(int i=0;i<n1;i++){
        if(arr1[i]>maxarr1){
            maxarr1=arr1[i];
        }
    }
    int minarr2 =arr2[0];
    for(int i=0;i<n2;i++){
        if (arr2[i]<minarr2){
            minarr2=arr2[i];
        }
    }
    int product = maxarr1 * minarr2;
    cout<<"the product is "<<product<<endl;
    return 0;
}
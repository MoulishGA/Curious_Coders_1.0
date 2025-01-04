#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int l,n,sum=0;
    cout<<"enter the n : ";
    cin>>n;
    cout<<"enter the start element : ";
    cin>>l;
    vector<int> arr(n+1,0);
    for(int i=2;i<=n;i++){
        if(arr[i]==0){
            for(int j=2*i;j<=n;j=j+i){
                arr[j]=1;
            }
        }
    }
    for(int i=max(2,l);i<=n;i++){
        if(arr[i]==0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}
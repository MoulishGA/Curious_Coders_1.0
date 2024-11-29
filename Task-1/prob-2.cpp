#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "This is a program to Say The angles can form triangle or not \n";
    cout << "Enter the First angle : ";
    cin >> a;
    cout << "Enter the Second angle : ";
    cin >> b;
    cout << "Enter the Third angle : ";
    cin >> c;
    if (a+b+c==180){
        cout << "Using the Enterted angle a Triangle can be formed";
    }else{
        cout << "Using the Entered angle a Triangle cannot be formed";
    }
    return 0;
}
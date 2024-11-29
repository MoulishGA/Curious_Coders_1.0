#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "The is the program to calculate the grade \n";
    cout << "Enter the Mark : ";
    cin >> a;
    if(a>=90 && a<=100){
        cout <<"Grade A";
    }else if(a>=80 && a<90){
        cout <<"Grade B";
    }else if(a>=60 && a<80){
        cout <<"Grade C";
    }else if(a>=35 && a<60){
        cout <<"Grade D";
    }else if(a>=0 && a<35){
        cout <<"Fail";
    }else{
        cout <<"Enter a valid Mark";
    }
    return 0;

}
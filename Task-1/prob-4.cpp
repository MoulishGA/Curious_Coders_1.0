#include <iostream>
using namespace std;
int main(){
    int a;
    cout <<"Enter the Size : ";
    cin >> a;
    switch (a)
    {
    case 29:
    cout <<"Small";
        break;
    case 30:
    cout <<"Medium";
        break;
    case 38:
    cout <<"Large";
        break;
    case 42:
    cout <<"XLarge";
        break;
    default:
    cout <<"invalid Size\n";
    cout <<"Size availabe are 29,30,38,42";
        break;
    }
    return 0;
}

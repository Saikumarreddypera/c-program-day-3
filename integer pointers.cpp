#include <iostream>
using namespace std;

int main(){

    int a,b;
    int *ptrA = &a;
    int *ptrB = &b;

    cout << "Please enter the value of a : ";
    cin >> a;

    cout << "Please enter the value of b : ";
    cin >> b;

    cout << "The value of (a,b) is (" << a << "," << b << ")" << endl;

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x = 67;
    int* p = &x;

    cout << p << " "<< *p << endl;

    *p = 68;

    cout << *p << endl;



}
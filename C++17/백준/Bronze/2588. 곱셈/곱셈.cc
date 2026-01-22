#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int x, y, z;
    x = b/100; //100
    y = (b/10)%10; //10
    z = b%10; //1

    cout << a*z << '\n' << a*y << '\n' << a*x << '\n' << a*b << '\n';
    return 0;
}
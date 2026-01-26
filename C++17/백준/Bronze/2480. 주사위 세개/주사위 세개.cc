#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    int money;
    cin >> a >> b >> c;

    if (a==b && b==c)
    {
        money = 10000 + a*1000;
    }
    else if (a==b || a==c)
    {
        money = 1000 + a*100;
    }
    else if (b==c)
    {
        money = 1000 + b*100;
    }
    else
    {
        money = 100*max(max(a,b),c);
    }
    
    cout << money;
    return 0;
}
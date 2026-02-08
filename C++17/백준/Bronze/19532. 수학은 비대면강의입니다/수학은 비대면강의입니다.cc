#include <iostream>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d, e, f;
    int x, y;

    cin >> a >> b >> c >> d >> e >> f;
    
    for (x = -999; x <= 999; x++)
    {
        for (y = -999; y <= 999; y++)
        {
            if (a*x+b*y==c && d*x+e*y==f)
            {
                cout << x << " " << y;
                break;
            }
            
        }
        
    }
    
    return 0;
}
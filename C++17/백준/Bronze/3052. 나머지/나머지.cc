#include <iostream>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int num[10] = {};
    bool check[42] = {};
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
        check[num[i]%42] = true;
    }

    int cnt = 0;
    for (int i = 0; i < 42; i++)
    {
        if (check[i] == true)
        {
            cnt++;
        }
        
        
    }

    cout << cnt;
    
    
    return 0;
}
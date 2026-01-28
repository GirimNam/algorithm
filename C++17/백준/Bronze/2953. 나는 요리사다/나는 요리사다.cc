#include <iostream>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int num;
    int max = 0;
    int winner = 0;

    for (int i = 1; i <= 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> num;
            sum += num;
        }
        if (sum > max)
        {
            max = sum;
            winner = i;
        }
        
    }
    cout << winner << " " << max;
    
    
    return 0;
}
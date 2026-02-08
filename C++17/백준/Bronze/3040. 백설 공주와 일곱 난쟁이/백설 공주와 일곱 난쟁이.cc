#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int nje[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> nje[i];
    }

    vector <int> select = {0, 0, 1, 1, 1, 1, 1, 1, 1};

    do
    {
        int sum = 0;
        vector <int> real;

        for (int i = 0; i < 9; i++)
        {
            if (select[i] == 1)
            {
                real.push_back(nje[i]);
                sum += nje[i];
            }
            
        }

        if (sum == 100)
        {
            for (int a : real) {
                cout << a << '\n';
            }
        }
          
    } while (next_permutation(select.begin(), select.end()));
    


    




    return 0;
}
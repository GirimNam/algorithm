#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int M, N;
    cin >> M >> N;


    for (int i = M; i <= N; i++)
    {
        if(i==1) continue;

        bool isPrime = true;

        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i%j ==0)
            {
                isPrime = false;
                break;
            }
            
        }
        if (isPrime == true)
        {
            cout << i << '\n';
        }
        
    }
    

    
    return 0;
}
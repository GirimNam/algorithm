#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 2; i * i <= N; i++)
    {
        while (N % i == 0)
        {
            cout << i << '\n';
            N /= i;
        }
    }

    // 남은 수가 1보다 크면 소수
    if (N > 1)
    {
        cout << N << '\n';
    }

    return 0;
}
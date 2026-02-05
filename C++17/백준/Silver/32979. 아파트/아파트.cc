#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    //큐 이용해서 front=밑, rear=위로 생각
    int N, T;
    cin >> N;
    cin >> T;

    queue <int> q;
    for (int i = 0; i < 2*N; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    for (int i = 0; i < T; i++)
    {
        int y;
        cin >> y;
        for (int j = 0; j < y-1; j++)
        {
            int k = q.front();
            q.pop();
            q.push(k);
        }
        cout << q.front() << " ";
        
    }
    

    return 0;
}
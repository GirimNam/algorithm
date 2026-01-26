#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    queue <int> q;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }

    /*do
    {
        q.pop();
        int a = q.front();
        q.pop();
        q.push(a);
    } while (q.size() != 1);*/ 
     //N=1일 때 런타임 에러 발생

    if (N==1)
    {
        cout << 1 << '\n';
        return 0;
    }
    

    while (q.size() != 1)
    {
        q.pop();
        int a = q.front();
        q.push(a);
        q.pop();
    }
    
    
    cout << q.front();
    
    return 0;
}
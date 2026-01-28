#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    deque <int> dq;
    string s;
    int num;

    for (int i = 0; i < N; i++)
    {
        cin >> s;

        if(s=="push_front"){
            cin >> num;
            dq.push_front(num);
        }
        else if (s=="push_back")
        {
            cin >> num;
            dq.push_back(num);
        }
        else if (s=="pop_front")
        {
            if (!dq.empty())
            {
                num = dq.front();
                cout << num << '\n';
                dq.pop_front();
            }
            else cout << -1 << '\n';
        }
        else if (s=="pop_back")
        {
            if (!dq.empty())
            {
                num = dq.back();
                cout << num << '\n';
                dq.pop_back();
            }
            else cout << -1 << '\n';
        }
        else if (s=="size")
        {
            if (!dq.empty())
            {
                cout << dq.size() << '\n';
            }
            else cout << 0 << '\n';
        }
        else if (s=="empty")
        {
            if (!dq.empty())
            {
                cout << 0 << '\n';
            }
            else cout << 1 << '\n';
        }
        else if (s=="front")
        {
            if (!dq.empty())
            {
                num = dq.front();
                cout << num << '\n';
            }
            else cout << -1 << '\n';
        }
        else if (s=="back")
        {
            if (!dq.empty())
            {
                num = dq.back();
                cout << num << '\n';
            }
            else cout << -1 << '\n';
        }
        
    }
    
    return 0;
}
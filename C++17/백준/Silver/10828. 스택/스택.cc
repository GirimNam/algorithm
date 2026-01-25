#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    stack <int> s;
    int N;
    cin >> N;
    string a;
    int b;

    for (int i = 0; i < N; i++)
    {
        cin >> a;
        if (a == "push")
        {
            cin >> b;
            s.push(b);
        }
        else if (a == "pop")
        {
            if (s.empty())
            {
                cout << -1 << '\n';
            }
             else {
                cout << s.top() << '\n';
                s.pop();
            }
        }
        else if (a == "size")
        {
            cout << s.size() << '\n';
        }
        else if (a == "empty")
        {
            if (s.empty())
            {
                cout << 1 << '\n';
            }
             else cout << 0 << '\n';
        }
        else if (a == "top")
        {
            if (s.empty())
            {
                cout << -1 << '\n';
            }
             else cout << s.top() << '\n';
        }
        
        
    }
    
    return 0;
}
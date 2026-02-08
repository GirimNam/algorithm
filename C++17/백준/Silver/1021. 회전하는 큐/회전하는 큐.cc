#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    deque <int> dq;

    for (int i = 1; i <= N; i++)
    {
       dq.push_back(i);
    }

    int cnt = 0;

    //덱이 회전하면서 계속 숫자들의 위치가 달라지기 때문에 위치를 판별하는 기준을 숫자 그 자체로 놓으면 안되고 해당 숫자의 인덱스로 해야 함

    while (M--) {
        int a;
        cin >> a;

        // a의 위치 찾기
        int idx = 0;
        for (int x : dq) {
            if (x == a) break;
            idx++;
        } //그때그때마다 하당 값의 인덱스 새로 찾기

        // 왼쪽 회전
        if (idx <= dq.size() / 2) {
            while (dq.front() != a) {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }
        // 오른쪽 회전
        else {
            while (dq.front() != a) {
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }

        dq.pop_front(); // 제거
    }

    cout << cnt;

    return 0;

}


#include <iostream>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int A = 64;
    int N;
    int cnt = 0;

    cin >> N;
    
    //나올 수 있는 숫자: 2의 제곱수(<64) -> 이진수로 생각하자!!(이걸 어떻게 생각해냄)

    while (N>0) {
        if (N % 2 == 1) {
            cnt++;
        }
        N /= 2;
    }
 
    cout << cnt;

    
}
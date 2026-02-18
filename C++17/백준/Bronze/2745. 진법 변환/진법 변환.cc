#include <iostream>
#include <string>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    //문자열을 하나의 배열로 보고 각 칸마다 숫자 또는 알파벳을 읽어서 숫자로 변환
    //이 경우 string을 쓰면 해당 문자열을 하나의 배열처럼 이용할 수 있다.

    string N;
    int B;

    cin >> N >> B;
    int l = N.length();
    int sum = 0;

    for (int i = 0; i < l; i++)
    {
        int cton = 0;
        if (!isdigit(N[i]))
        {
            cton = N[i] - 55;
        }
        else cton = N[i] - '0';
        //sum += B^(l-i-1) * cton; //c++에서는 ^가 제곱을 의미하지 않음(논리연산 의미)
        sum = sum * B + cton; //이게 진법 풀이의 정석 풀이
        //a * B^2 + b * B + c * B^0 = ((a*B + b) * B + c)
    }
    
    cout << sum;
    return 0;
}
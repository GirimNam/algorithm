#include <iostream>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    double A, B;
    cin >> A >> B;
    cout.precision(10); //반올림하여 소수점 아래 10자리까지 표현하도록 함
    cout << A/B;
}
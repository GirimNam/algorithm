#include <iostream>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int A, B, C;
    cin >> A >> B;
    cin >> C;

//0시 0분, 시간은 1000분까지 가능 
    if (B+C>=60)
    {
        A = A + (B+C)/60;
        B = (B+C)%60;
        if (A==24)
        {
            A = 0;
        }
        else if (A>24)
        {
            A -= 24;
        } 
    }
    else
    {
        B += C;
    }
    
    cout << A << " " << B;

    return 0;
}
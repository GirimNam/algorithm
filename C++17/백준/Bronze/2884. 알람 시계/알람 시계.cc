#include <iostream>
using namespace std;

int main(){
    int H, M;
    cin >> H >> M;

    if (H==0 && M<45)
    {
        H = 23;
        M = M+60-45;
    }
    else if (M<45)
    {
       M = M+60-45;
       H -= 1;
    }
    else
    {
        M -= 45;
    }

    cout << H << " " << M;
    
    
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector <double> v(N);

    double max = 0;
    double sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        if (max < v[i])
        {
            max = v[i];
        }   
    }

    for (int i = 0; i < N; i++)
    {
        v[i] = (v[i]/max)*100;
        sum += v[i];
        
    }
    cout << sum/N;
    
    
    return 0;
}
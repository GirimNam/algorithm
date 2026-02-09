#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void bubble_sort(vector <int> arr, int n, int k){
    int cnt = 0;
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                cnt++;
                if (cnt == k)
                {
                    cout << arr[j] << " " << arr[j+1];
                    break;
                }
                
            }
            
        }
        
    }
    if (cnt < k)
    {
        cout << -1;
    }
    
    
}

int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector <int> A;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    
    bubble_sort(A, N, K);

    return 0;
}
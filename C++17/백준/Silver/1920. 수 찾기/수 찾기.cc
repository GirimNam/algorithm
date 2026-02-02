#include <iostream>
#include <vector>
#include <algorithm> //삽입정렬은 O(n^2)으로 시간복잡도가 크다!
using namespace std;

/*void insertion(vector<int>& list, int n){
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = list[i];
        for (j = i-1; j >=0 && list[j]>key; j--)
        {
            list[j+1] = list[j];
        }
        list[j+1] = key;
        
    }
}*/

int binary_search(int key, int low, int high, vector<int>& list){
    int middle;
    if (low <= high)
    {
        middle = (low+high)/2;
        if (key == list[middle]) return 1;
        else if (key < list[middle])
        {
            return binary_search(key, low, middle-1, list);
        }
        else return binary_search(key, middle+1, high, list);
        
    }
    return 0;
    
}

//정렬 -> 각 숫자마다 for문 돌려서 탐색
int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N;
    vector <int> A(N);
    
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    //insertion(A, N);
    sort(A.begin(), A.end());

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        cout << binary_search(x, 0, N - 1, A) << '\n';
    }
    
    return 0;
}
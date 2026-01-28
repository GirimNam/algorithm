#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int arr[101];

	for (int i = 0;i < N;i++) {
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	int max_sum = 0;
	//아무거나 3장중에 M이랑 가까운 숫자를 찾는게 포인트임.
	for (int i = 0;i < N;i++) {
		for (int j = i + 1;j < N;j++) {
			for (int k = j + 1;k < N;k++) {
				int three = arr[i] + arr[j] + arr[k];
				if (three <= M && three > max_sum) {
					max_sum = three;
				}
			}
		}
	}
	cout << max_sum;

	return 0;
}

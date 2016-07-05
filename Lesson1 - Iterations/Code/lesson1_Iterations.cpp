#include <iostream>
using namespace std;

int solution(int N);

int main() {
	int n;

	scanf("%d", &n);

	solution(n);
	return 0;
}

int solution(int N) {
	int arr[100];
	int cnt = 0;
	int max = 0;	// 최대 길이
	int lengthCount = 0;	// 길이
	bool encounterOne = false;

	while (1) {
		if (N < 1) {
			break;
		}
		arr[cnt] = N % 2;
		if (arr[cnt] == 1 && encounterOne == false) {
			encounterOne = true;
		} else if (arr[cnt] == 1 && encounterOne == true) {
			if (max < lengthCount) {
				max = lengthCount;
			}
			lengthCount = 0;
		}
		else if (arr[cnt] == 0 && encounterOne == true) {
			lengthCount++;
		}

		N = N / 2;
		cnt++;
	}
	return max;
}

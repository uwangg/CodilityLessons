#include <iostream>
#include <vector>
using namespace std;

int solution(int X, vector<int> &A) {
	vector<int> chk(A.size());

	// -1로 전부 초기화
	for (int i = 0; i < A.size(); i++) {
		chk[i] = -1;
	}

	for (int i = 0; i < A.size(); i++) {
		if (chk[A[i] - 1] == -1) {
			chk[A[i] - 1] = i;
		}
	}

	int max = -1;
	// 수열이 비어있다면 나뭇잎이 부족하므로 -1 리턴
	for (int i = 0; i < X; i++) {
		if (chk[i] == -1) {
			return -1;
		}
		if (chk[i] > max) {
			max = chk[i];
		}
	}

	return max;
}

int main() {

	vector<int> a;
	int X = 5;

	a.push_back(1);
	a.push_back(3);
	a.push_back(1);
	a.push_back(4);
	a.push_back(2);
	a.push_back(3);
	a.push_back(5);
	a.push_back(4);

	cout << solution(X,a);
	return 0;
}
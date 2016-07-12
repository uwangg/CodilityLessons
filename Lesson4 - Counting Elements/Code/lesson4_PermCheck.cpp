#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
	vector<bool> chk(A.size());

	// chk 초기화
	for (int i = 0; i < chk.size(); i++) {
		chk[i] = false;
	}

	// ex) A[0]이 4라면 chk[3](인덱스 = 4-1)을 true로 변경
	for (int i = 0; i < A.size(); i++) {
		if(A[i] <= A.size()) {
			chk[A[i] - 1] = true;
		}
	}

	// false인 곳이 있다면 permutation이 아님
	for (int i = 0; i < A.size(); i++) {
		if (chk[i] == false) {
			return 0;
		}
	}
	return 1;
}

int main() {
	vector<int> a;
	a.push_back(4);
	a.push_back(1);
	a.push_back(3);
	a.push_back(2);

	cout << solution(a) << endl;

	vector<int> b;
	b.push_back(4);
	b.push_back(1);
	b.push_back(3);

	cout << solution(b) << endl;
}
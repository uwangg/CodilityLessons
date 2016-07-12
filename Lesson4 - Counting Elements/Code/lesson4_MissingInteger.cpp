#include <iostream>
#include <vector>
using namespace std;


// 해결 안됨 (런타임에러)
int solution(vector<int> &A) {

	int max = 1;
	for (int i = 0; i < A.size(); i++) {
		if (max < A[i])
			max = A[i];
	}
	
	// 전부 음수나 0일 경우
	if (max == 0) {
		return 1;
	}
	vector<int> chk;
	chk.assign(max, 0);

	for (int i = 0; i < A.size(); i++) {
		if (A[i] > 0) {
			chk[A[i] - 1] = 1;
		}
	}

	for (int i = 0; i < chk.size(); i++) {
		if (chk[i] == 0)
			return (i+1);
	}
	return chk.size()+1;
}

int main() {
	vector<int> a;

	a.push_back(2);
	a.push_back(3);
	a.push_back(1);
	a.push_back(-4);
	a.push_back(-3);
	a.push_back(50);
	a.push_back(101);
	a.push_back(2147483647);

	cout << solution(a);
	return 0;
}
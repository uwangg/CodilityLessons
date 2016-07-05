#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
	sort(A.begin(), A.end());

	int cnt = 0;
	for (int i = 0; i < A.size()-1; i++) {
		cnt++;
		if (A[i] != A[i+1]) {
			if (cnt % 2 == 1 || i==0)
				return A[i];
			cnt = 0;
		}
	}
	return A[A.size() - 1];
}

int main() {
	vector<int> a;
	a.push_back(9);
	a.push_back(3);
	a.push_back(9);
	a.push_back(3);
	a.push_back(9);
	a.push_back(7);
	a.push_back(9);
	int idx = solution(a);
	cout << idx << endl;
	return 0;
}
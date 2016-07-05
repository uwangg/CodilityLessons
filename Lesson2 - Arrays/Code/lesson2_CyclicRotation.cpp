#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> &A, int K);

int main() {

	vector<int> a, b;
	int k = 3;

/*	a.push_back(3);
	a.push_back(8);
	a.push_back(9);
	a.push_back(7);
	a.push_back(6); */


	b = solution(a, k);

	for (int i = 0; i< b.size(); i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	return 0;
}

vector<int> solution(vector<int> &A, int K) 
{
	vector<int> tmp(A.size());

	if (A.size() <= 1 || A.size() == K) {
		return A;
	}
	if (K > A.size()) {
		K = K%A.size();
	}
	for (int i = 0; i < A.size(); i++) {
		tmp[i] = A[(i + (A.size() - K)) % A.size()];
	}
	return tmp;
}
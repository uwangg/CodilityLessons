#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A) {

	int total = (A.size()+1)*(A.size() + 2) / 2;

	for (int i = 0; i < A.size(); i++) {
		total -= A[i];
	}
	
	return total;
}

int main() {
	vector<int> a;
	a.push_back(2);
	a.push_back(3);
	a.push_back(1);
	a.push_back(5);
	cout << solution(a) << endl;
	return 0;
}